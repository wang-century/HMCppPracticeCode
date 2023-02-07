#include <iostream>

using namespace std;

/**
 * 多态
 * 多态分为两类
 * 静态多态:函数重载和运算符重载属于静态多态，复用函数名
 * 动态多态:派生类和虚函数实现运行时多态
 *
 * 静态多态和动态多态区别:
 * 静态多态的函数地址早绑定–编译阶段确定函数地址
 * 动态多态的函数地址晚绑定–运行阶段确定函数地址
 *
 * 动态多态满足条件
 * 1.有继承关系
 * 2.子类重写父类的虚函数
 */

class Animal{
public:
    /**
     * 虚函数
     */
    virtual void speak(){
        cout << "动物在叫" << endl;
    }
};

class Cat:public Animal{
public:
    void speak(){
        cout << "猫在叫" << endl;
    }
};

class Dog:public Animal{
public:
    void speak(){
        cout << "狗在叫" << endl;
    }
};
/**
 * 地址早绑定，在编译阶段确定函数地址
 * @param animal
 */
void doSpeak(Animal &animal){
    animal.speak(); // 动物在说话
}

int main() {
    Cat cat;
    doSpeak(cat);
}