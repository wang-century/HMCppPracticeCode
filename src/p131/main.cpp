#include <iostream>

using namespace std;

/**
 * 1.子类对象可以直接访问到子类中同名成员
 * 2.子类对象加作用域可以访问到父类同名成员
 * 3.当子类与父类拥有同名的成员函数，子类会隐藏父类中同名成员函数，加作用域可以访问到父类中同名函数
 */
class MyBaseClass {
private:
    int a;
protected:
    int b;
public:
    int c;

    void print() {
        cout << "MyBaseClass： a = " << a << "\tb= " << b << "\tc= " << c << endl;
    }
};

/**
 * 公有继承
 */
class Son : public MyBaseClass {
public:
    int b;

    void print() {
        // 访问子类的b
        b = 20;
        cout << "Son： b= " << b << endl;
        // 访问父类的b
        MyBaseClass::b = 30;
        cout << "MyBaseClass： b= " << MyBaseClass::b << endl;
    }
};


int main() {
    Son son;
    // 调用子类函数
    son.print();
    // 调用父类函数
    son.MyBaseClass::print();
}