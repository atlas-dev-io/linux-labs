

class Animal {};

class Cat : public Animal {};

int main() {
    Cat c1;
    Animal *p = dynamic_cast<Animal *>(&c1);
    return 0;
}
