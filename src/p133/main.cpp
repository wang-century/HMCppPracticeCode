#include <iostream>

using namespace std;

/**
 * C++多继承
 * 语法：class 子类名：继承方式 父类名1，继承方式 父类名2，...，继承方式 父类名n
 * 多继承可能会引发父类中有同名成员出现，需要加作用域区分
 * 实际开发不推荐使用多继承
 */
class Base1 {
public:
    int a;

    Base1() {
        a = 10;
    }
};

class Base2 {
public:
    int b;

    Base2() {
        b = 30;
    }
};

class Son : public Base1, public Base2 {
public:
    int a, b, c, d;

    Son() {
        c = 40;
        d = 50;
    }
};


int main() {
    Son son;
    // 打印son的大小
    cout << "son的大小：" << sizeof(son) << endl;
    cout << son.Base1::a << endl;
    cout << son.Base2::b << endl;
}