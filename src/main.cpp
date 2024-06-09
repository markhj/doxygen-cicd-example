#include <iostream>

/**
 * @defgroup MyProject
 */
namespace MyProject {
    class MyClass {
    public:
        /**
         * Greet the world!
         */
        static void greet() {
            std::cout << "Hello, World!" << std::endl;
        }
    };
}

int main() {
    MyProject::MyClass::greet();
    return 0;
}
