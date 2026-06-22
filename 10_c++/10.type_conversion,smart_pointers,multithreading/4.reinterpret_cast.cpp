
struct student {
    char name[20];
    int age;
};

int main() {
    struct student stu;
    char *p = reinterpret_cast<char *>(&stu);
    return 0;
}
