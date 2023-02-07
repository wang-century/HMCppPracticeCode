#include <iostream>

using namespace std;

/**
 * 继承
 * 好处：减少重复代码
 * 语法：class 子类 : 继承方式 父类
 * 子类也称为派生类
 * 父类也称为基类
 */
class Animal {
public:
    int age;

    void eat() {
        cout << "Animal::eat()" << endl;
    }
};

class Dog : public Animal {
public:
    void eat() {
        cout << "Dog::eat()" << endl;
    }
};

class Cat : public Animal {
public:
    void eat(){
        cout << "Cat::eat()" << endl;
    }
};


int main() {
    Dog dog;
    dog.age = 3;
    dog.eat();
    cout << dog.age << endl;
    Cat cat;
    cat.age = 2;
    cat.eat();
    cout << cat.age << endl;
}