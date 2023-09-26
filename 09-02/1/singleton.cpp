#include <iostream>

class Singleton {
public:
    static Singleton& getInstance() {
        static Singleton instance;
        return instance;
    }

    void printMessage() {
        std::cout << "Здарова, world!" << std::endl;
    }

private:
    Singleton() {}
    ~Singleton() {}
    Singleton(const Singleton&) = delete; // no copy constructor
    Singleton& operator=(const Singleton&) = delete; // no assignment operator
};

int main() {
    Singleton& instance = Singleton::getInstance();
    instance.printMessage();
    return 0;
}
