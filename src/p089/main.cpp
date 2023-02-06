#include <iostream>
#include <limits>

using namespace std;

/**
 * 引用的使用
 * 作用：给变量起别名
 * 语法：数据类型 &别名 = 原名
 *
 * 引用的本质：
 *  引用的本质在C++中是一个指针常量，指向原变量的地址
 *
 * 引用的注意事项：
 *      引用必须初始化，初始化后不可修改
 */


/**
 * 引用做函数参数，交换两个整数的值（会修改原数值）
 * @param a
 * @param b
 */
void swapIntValue(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

/**
 * 引用做函数返回值
 * 注意：不要返回局部变量的引用
 * @param value
 * @return
 */
int& createIntValueReturnRef(int value){
    static int a = value;   // 静态变量，只会初始化一次 不会在函数执行完后销毁
    return a;
}

int main() {
    int a = 10; // 定义一个变量a
    int &b = a; // 定义一个引用b，引用a
    cout << "a = " << a << endl; // 10
    cout << "b = " << b << endl; // 10
    cout << "a的地址 = " << &a << endl; // 0x7ffeeb2a5f0c
    cout << "b的地址 = " << &b << endl; // 0x7ffeeb2a5f0c
    // 通过b修改a的值
    b = 100;
    cout << "a = " << a << endl; // 100
    cout << "b = " << b << endl; // 100
    /* 引用的注意事项 */
    int c = 20;
    // int &d; // 错误，引用必须初始化
    int &d = c; // 一旦初始化，不可修改
    cout << "c = " << c << endl; // 20
    cout << "d = " << d << endl; // 20
    /* 引用做函数参数交换两个整数的值 */
    int e = 10;
    int f = 20;
    cout << "交换前：e = " << e << ", f = " << f << endl; // 10, 20
    swapIntValue(e, f);
    cout << "交换后：e = " << e << ", f = " << f << endl; // 20, 10
    /* 引用做函数返回值 */
    int &g = createIntValueReturnRef(30);
    cout << "g = " << g << endl; // 30
    /* 引用函数调用可以作为左值 */
    int &h = createIntValueReturnRef(40) = 20;  // 相当于 createIntValueReturnRef(40) = 20; int &h = 20;
    cout << "h = " << h << endl; // 20
}
