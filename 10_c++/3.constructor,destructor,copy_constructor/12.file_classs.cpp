#include <cerrno>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fcntl.h>
#include <iostream>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

class File {
  private:
    char *file_path;
    int file_fd;

  public:
    File(const char *_file_path) : file_path(nullptr), file_fd(-1) {
        // allocate heap space
        file_path = new char[50];
        strcpy(file_path, _file_path);

        // open file
        file_fd = open(file_path, O_RDONLY);
        if (-1 == file_fd) {
            std::cout << "File failed to open!\n" << std::endl;
            std::cout << strerror(errno) << std::endl;
            exit(EXIT_FAILURE);
        } else {
            std::cout << "File opened successfully, file descriptor is "
                      << file_fd << std::endl;
        }
    }
    ~File() {
        if (-1 != file_fd) {
            close(file_fd);
            delete[] file_path;
            file_path = nullptr;
        } else
            std::cout << "The file is not open and cannot be closed!"
                      << std::endl;
    }
};

int main() {
    File f1("~/1.txt");

    return 0;
}
