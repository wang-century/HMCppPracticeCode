#include <iostream>
#include "swap.h"

using namespace std;
/**
 * 函数的分文件编写
 * 一般有四个步骤：
 *  1. 创建后缀名为.h的头文件
 *  2. 创建后缀名为.cpp的源文件
 *  3. 在头文件中声明函数
 *  4. 在源文件中实现函数
 * @return
 */
int main() {
    // 交换两个整数
    int a = 10;
    int b = 20;
    cout << "a = " << a << ", b = " << b << endl;
    swap(a,b);
    cout << "a = " << a << ", b = " << b << endl;
}
