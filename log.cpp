#include <iostream>
#include <string>

class Logger {
public:
    // 输出当前类名、函数名和位置
    static void log(const std::string& className, const std::string& funcName, const std::string& fileName, int lineNumber) {
        std::cout << "Class Name: " << className << std::endl;
        std::cout << "Function Name: " << funcName << std::endl;
        std::cout << "Location: " << fileName << ":" << lineNumber << std::endl;
    }
};

#define LOG() Logger::log(typeid(*this).name(), __func__, __FILE__, __LINE__)

class MyClass {
public:
    void myFunction() {
        LOG(); // 调用宏，输出日志
    }
};

int main() {
    MyClass obj;
    obj.myFunction();
    return 0;
}
