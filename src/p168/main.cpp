#include <iostream>
#include <fstream>

using namespace std;

/**
 * 模板：建立通用模具，提高复用性；模板不可以直接使用，他是一个框架；模板的通用不是万能的
 * 函数模板：
 * 作用：建立一个通用函数，其函数返回值类型和形参类型可以不具体制定，用一个虚拟的类型来代表
 * 语法：
 * template<typename T>
 * 函数声明或定义
 */

// 函数模板
// 声明一个模板，告诉编译器后面代码中紧跟的T不要报错，T是一个通用的数据类型
template<typename T>
void mySwap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}


int main() {
    // 两种方式使用函数模板
    // 1.自动类型推导
    int a = 10, b = 30;
    mySwap(a, b);
    // 2.显示指定类型
    mySwap<int>(a, b);
}