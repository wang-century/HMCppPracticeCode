#include <iostream>
// 常量的定义
#define PI 3.1415926

int main() {
    const int a = 10;
    // a = 20; // 常量不能被修改
    std::cout << "a = " << a << std::endl;
    std::cout << "PI = " << PI << std::endl;
    return 0;
}