#include <iostream>

using namespace std;
// 函数声明 告诉编译器函数的名称、返回值类型、参数类型 但不包含函数的实现
int add(int a, int b);

int main() {
    // 定义变量
    int a = 10;
    int b = 20;
    // 调用函数
    int c = add(a, b);
    cout << "c = " << c << endl;
}

/**
 * 求两数之和
 * @param a
 * @param b
 * @return
 */
int add(int a, int b) {
    return a + b;
}