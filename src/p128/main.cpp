#include <iostream>

using namespace std;

/**
 * 继承
 * 好处：减少重复代码
 * 语法：class 子类 : 继承方式 父类
 * 子类也称为派生类
 * 父类也称为基类
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
class Son1 : public MyBaseClass {
public:
    void print() {
        /* b、c在此为公有权限，类外可以访问 */
        // cout << "Son1: a = " << a << endl;   // 私有成员不能访问
        cout << "Son1： b= " << b << "\tc= " << c << endl;
    }
};
class Son2:protected MyBaseClass{
public:
    void print() {
        /* b、c在此为保护权限，类外不可以访问 */
        // cout << "Son1: a = " << a << endl;   // 私有成员不能访问
        cout << "Son1： b= " << b << "\tc= " << c << endl;
    }
};
class Son3:private MyBaseClass{
public:
    void print() {
        /* b、c在此为私有权限，类外不可以访问 */
        // cout << "Son1: a = " << a << endl;   // 私有成员不能访问
        cout << "Son1： b= " << b << "\tc= " << c << endl;
    }
};


int main() {
}