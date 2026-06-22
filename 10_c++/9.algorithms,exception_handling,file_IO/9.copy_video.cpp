#include <filesystem>
#include <iostream>
#include <system_error>

namespace fs = std::filesystem;

int main() {
    const fs::path source = "./old.mp4";
    const fs::path target = "./new.mp4";

    std::error_code ec;

    fs::copy_file(source, target, fs::copy_options::overwrite_existing, ec);

    if (ec) {
        std::cerr << "Copy failed, reason:" << ec.message() << std::endl;
        return -1;
    }

    std::cout << "Copy successful! File size: " << fs::file_size(target)
              << " byte." << std::endl;
    return 0;
}
