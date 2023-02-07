#include <iostream>

using namespace std;

/**
 * 函数调用运算符重载
 * 函数调用运算符()也可以重载
 * 由于重载后使用的方式非常像函数的调用，因此称为仿函数
 * 仿函数没有固定写法，非常灵活
 */
class MyPrint {
public:
    void operator()(string text) {
        cout << text << endl;
    }
};

class MyAdd {
public:
    int operator()(int v1, int v2) {
        return v1 + v2;
    }
};


int main() {
    MyPrint myPrint;
    myPrint("Hello World");
    // 匿名函数对象
    cout << MyAdd()(10, 20) << endl;
}