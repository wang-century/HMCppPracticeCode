#include <iostream>
#include <limits>

using namespace std;

/**
 * 函数重载
 * 作用：同一个作用域下，函数名相同，参数列表不同，提高复用性
 * 函数重载满足条件：
 *  1.同一作用域
 *  2.函数名称相同
 *  3.函数参数类型不同，或者个数不同，或者顺序不同
 * 注意：函数的返回值不可以作为函数重载的条件
 */
void print(){
    cout << "无数据" << endl;
}

void printInt(int a){
    cout << "整型数据：" << a << endl;
}
void printDouble(double a){
    cout << "浮点型数据：" << a << endl;
}
void printIntDouble(int a, double b){
    cout << "整型数据：" << a << "浮点型数据：" << b << endl;
}

int main() {
    int a = 10;
    double b = 2.31;
    print();
    printInt(a);
    printDouble(b);
    printIntDouble(a, b);

}

