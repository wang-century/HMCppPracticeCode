#include <iostream>

using namespace std;

class Person {
public :
    int a, b;

    Person() {
        this->a = this->b = 0;
    }

    /**
     * 1.成员函数重载加号运算符
     * @param p
     * @return
     */
    Person operator+(const Person &p) {
        Person temp;
        temp.a = this->a + p.a;
        temp.b = this->b + p.b;
        return temp;
    }
};

class Man {
public :
    int a, b;

    Man() {
        this->a = this->b = 0;
    }
};

/**
 * 2.全局函数重载加号运算符
 * @param m
 * @param p
 * @return
 */
Man operator+(Man &man1, Man &man2) {
    Man temp;
    temp.a = man1.a + man2.a;
    temp.b = man1.b + man2.b;
    return temp;
}

/**
 * 运算符重载也可以发生函数重载
 * @return
 */
Man operator+(Man &man, int value) {
    Man temp;
    temp.a = man.a + value;
    temp.b = man.b + value;
    return temp;
}


int main() {
    // 1.使用成员函数重载加号运算符
    Person p1, p2;
    p1.a = p1.b = 10;
    p2.a = p2.b = 20;
    Person p3 = p1 + p2;
    cout << p3.a << " " << p3.b << endl;    // 30 30
    // 2.使用全局函数重载
    Man m1, m2;
    m1.a = m1.b = 10;
    m2.a = m2.b = 20;
    Man m3 = m1 + m2;
    cout << m3.a << " " << m3.b << endl;    // 30 30
    // 重载
    Man m4 = m1 + 5;
    cout << m4.a << " " << m4.b << endl;    // 15 15
}