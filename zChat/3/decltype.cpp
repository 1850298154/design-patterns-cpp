#include <iostream>

int main() {
    int x = 10;
    decltype(x) y = 20; // y 的类型与 x 相同，即 int

    std::cout << "x: " << x << ", y: " << y << std::endl;
    std::cout << " type: " << typeid(x).name() << std::endl;

    return 0;
}
