class Animal {};

class Cat : public Animal {};

int main() {
    Animal a1;
    Cat *p = static_cast<Cat *>(&a1);
    return 0;
}
