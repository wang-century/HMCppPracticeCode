#include <iostream>

using namespace std;

class Person {
    friend ostream &operator<<(ostream &out, Person &p);

private:
    int a, b;
public :
    Person() {
        this->a = this->b = 10;
    }

};

/**
 * 只能用全局函数重载左移运算符
 * @param out
 * @param p
 */
ostream &operator<<(ostream &out, Person &p) {
    out << p.a << " " << p.b << endl;
    return out;
}


int main() {
    // 1.使用成员函数重载加号运算符
    Person p1;
    cout << p1 << endl; // 10 10
}