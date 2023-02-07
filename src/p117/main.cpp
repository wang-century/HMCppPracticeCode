#include <iostream>

using namespace std;

/**
 * 4.3.4 const修饰成员函数
 * 常函数:
 * 成员函数后加const后我们称为这个函数为常函数
 * 常函数内不可以修改成员属性
 * 成员属性声明时加关键字mutable后，在常函数中依然可以修改
 * 常对象:
 * 声明对象前加const称该对象为常对象
 * 常对象只能调用常函数
 */

class Person {
public:
    /**
     * this指针的本质是指针常量指针的指向是不可以修改的
     * const Person * const this;
     * 在成员函数后面加const，修饰的是this指针，让指针指向的值也不可以修改
     */
    void showPerson() const {
        // age = 20; // 常函数内不可以修改成员属性
        this->big = 30;
    }

    int age;
    mutable int big;    // 声明时加关键字mutable后，在常函数中依然可以修改
};

void test01() {
    // 常对象
    const Person p{}; // 声明对象前加const称该对象为常对象
    // p.age = 10; // 常对象不能修改成员属性
    p.big = 20; // 但是mutable修饰的成员属性可以修改
    p.showPerson(); // 常对象只能调用常函数
}

int main() {
    test01();
}

