#include <iostream>
#include <fstream>

using namespace std;

/**
 * 类模板与继承
 * 当类模板碰到继承时，需要注意一下几点:
 * 当子类继承的父类是一个类模板时，子类在声明的时候，要指定出父类中T的类型
 * 如果不指定，编译器无法给子类分配内存
 * 如果想灵活指定出父类中T的类型，子类也需变为类模板
 */

template<class T>
class Base {
    T m;
};

class Son : public Base<int> {

};


template<class T1, class T2>
class Son2 : public Base<T1> {

};


int main() {
    Son son;
    Son2<int, char> son2;
}