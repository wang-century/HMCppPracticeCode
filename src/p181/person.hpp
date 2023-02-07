#include <iostream>

using namespace std;

template<class T1, class T2>
class Person {
public:
    T1 name;
    T2 age;

    Person(T1 name, T2 age);

    void print();
};

// 构造函数类外实现
template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age) {
    this->name = name;
    this->age = age;
}

template<class T1, class T2>
void Person<T1, T2>::print() {
    cout << "name: " << name << " age: " << age << endl;
}