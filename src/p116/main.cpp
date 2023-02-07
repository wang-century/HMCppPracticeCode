#include <iostream>

using namespace std;

/**
 * 空指针访问成员函数
 * C++中空指针也是可以调用成员函数的，但是也要注意有没有用到this指针
 * 如果用到this指针，需要加以判断保证代码的健壮性
 */

class Person {
public:
    void showClassName() {
        cout << "I am Person class" << endl;
    }

    void showPersonAge() {
        if (this == NULL) {
            return;
        }
        cout << "I am " << this->age << " years old" << endl;
    }

    int age;
};

void test01() {
    Person *p = NULL;
    p->showClassName();
    p->showPersonAge();
}

int main() {
    test01();
}

