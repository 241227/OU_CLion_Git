#include <iostream>

int count(int a, int b) {
    return (a + b) * (a - b);
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "W trzecim branchu: " << count(2, 3) << std::endl;
    return 0;
}
