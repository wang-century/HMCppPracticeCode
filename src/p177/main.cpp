#include <iostream>
#include <fstream>

using namespace std;

/**
 * 类模板对象做函数参数
 * 一共有三种传入方式:
 * 1.指定传入的类型---直接显示对象的数据类型
 * 2.参数模板化---将对象中的参数变为模板进行传递
 * 3.整个类模板化---将这个对象类型模板化进行传递
 */


template<class NameType, class AgeType=int>
class Person {
public:
    NameType name;
    AgeType age;

    Person(NameType name, AgeType age) {
        this->name = name;
        this->age = age;
    }

    void print() {
        cout << "AgeType的数据类型为：" << typeid(AgeType).name() << endl;
        cout << "name: " << this->name << " age: " << this->age << endl;
    }
};

// 1.指定传入的类型
void printPerson1(Person<string, int> &p) {
    p.print();
}

void test01() {
    Person<string, int> person("张三", 18);
    printPerson1(person);
}

// 2.参数模板化
template<class T1, class T2>
void printPerson2(Person<T1, T2> &p) {
    p.print();
}

void test02() {
    Person<string, int> person("张三", 18);
    printPerson2(person);
}

// 3.整个类模板化
template<class T>
void printPerson3(T &p) {
    p.print();
}

void test03() {
    Person<string, int> person("张三", 18);
    printPerson3(person);
}


int main() {
//    test01();
//    test02();
    test03();
}