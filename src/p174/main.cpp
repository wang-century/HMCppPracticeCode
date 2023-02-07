#include <iostream>
#include <fstream>

using namespace std;

/**
 * 类模板
 * 类模板与函数模板区别主要有两点:
 * 1.类模板没有自动类型推导的使用方式
 * 2.类模板在模板参数列表中可以有默认参数
 *
 * 类模板中成员函数和普通类中成员函数创建时机是有区别的:
 * 普通类中的成员函数一开始就可以创建
 * 类模板中的成员函数在调用时才创建
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
        cout << "name: " << this->name << " age: " << this->age << endl;
    }
};


int main() {
    Person<string, int> person("张三", 18);
    person.print();
}