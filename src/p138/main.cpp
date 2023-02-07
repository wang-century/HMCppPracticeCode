#include <iostream>

using namespace std;

/**
 * 纯虚函数和抽象类
 * 在多态中，通常父类中虚函数的实现是毫无意义的，主要都是调用子类重写的内容
 * 因此可以将虚函数改为纯虚函数
 * 纯虚函数语法: virtual 返回值类型 函数名(参数列表) = 0;
 * 当类中有了纯虚函数，这个类也称为抽象类
 *
 * 抽象类特点:
 * 无法实例化对象
 * 子类必须重写抽象类中的纯虚函数，否则也属于抽象类
 */

/**
 * 抽象类
 * 无法实例化对象
 */
class Base {
public:
    virtual void func() = 0;    // 纯虚函数
};

class Son : public Base {
public:
    virtual void func() {
        cout << "func函数" << endl;
    }
};

int main() {
    Base *base = new Son;
    base->func();
}