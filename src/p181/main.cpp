#include <iostream>

using namespace std;

/**
 * 类模板与友元
 * 全局函数类内实现-直接在类内声明友元即可
 * 全局函数类外实现·需要提前让编译器知道全局函数的存在
 */
template<class T1, class T2>
class Person;

// 类外实现
template<class T1, class T2>
void print2(Person<T1, T2> &p) {
    cout << "name:" << p.name << " age:" << p.age << endl;
}

// 1.全局函数类内实现
template<class T1, class T2>
class Person {
    friend void print2<>(Person<T1, T2> &p);

private:
    T1 name;
    T2 age;
public:
    Person(T1 name, T2 age) {
        this->name = name;
        this->age = age;
    }

    // 类内实现
    friend void print(Person<T1, T2> &p) {
        cout << "name:" << p.name << " age:" << p.age << endl;
    }
};


int main() {
    Person<string, int> person("Lily", 28);
    print(person);
    print2(person);
}