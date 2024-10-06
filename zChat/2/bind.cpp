#include <iostream>
#include <functional>
#include <typeinfo>

void example(int a, int b) {
    std::cout << "a: " << a << ", b: " << b << std::endl;
}

int main() {
    // 创建一个绑定对象inline std::_Bind<...> std::bind<...>(void (&__f)(int a, int b), int &&__args, const std::_Placeholder<...> &__args)
    auto bound_func = std::bind(example, 10, std::placeholders::_1);

    // 使用 decltype 获取类型
    using BoundType = decltype(bound_func);
    std::cout << "BoundFunc type: " << typeid(BoundType).name() << std::endl;

    // 调用绑定的函数
    bound_func(20); // 输出: a: 10, b: 20

    return 0;
}
