#include <iostream>
#include <limits>

using namespace std;

int mySum(int a, int b, int c = 0);

/**
 * 函数默认参数
 * 注意：
 * 1.默认参数只能放在参数列表的最后
 * 2.如果函数声明有默认参数，函数实现就不能有默认参数(声明和实现只能有一个有默认参数)
 * @param a
 * @param b
 * @param c
 * @param d
 * @return
 */
int add(int a, int b, int c = 0, int d = 0) {
    return a + b + c + d;
}


int main() {
    cout << add(10, 20) << endl;
    cout << mySum(10, 20) << endl;
}

// 2.如果函数声明有默认参数，函数实现就不能有默认参数
int mySum(int a, int b, int c) {
    return a + b + c;
}
