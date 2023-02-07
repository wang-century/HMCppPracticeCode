#include <iostream>

using namespace std;

/**
 * 在C++中，类内的成员变量和成员函数分开存储，只有非静态成员变量才属于类的对象上
 *
 * this指针指向被调用的成员函数所属的对象
 * 用途：
 * 1.当形参和成员变量同名时，可用this指针来区分
 * 2.在类的非静态成员函数中返回对象本身，可以使用return *this;
 */
class Person {
};

void test01() {
    /* 空对象占用内存空间为1
     * C++编译器会给每个空对象也分配一个字节空间，为了区分空对象占内存的位置，每个空对象也应该有一个独一无二的内存地址 */
    Person p;
    cout << "sizeof(p):" << sizeof(p) << endl;  // 1
}

class Man {
public:
    int age;
    static int money;

    void print() {
        cout << "age:" << age << "\tmoney:" << money << endl;
    }

    static void print(Man &man) {
        cout << "age:" << man.age << "\tmoney:" << money << endl;
    }
};

void test02() {
    // 非空对象占内存大小
    Man man;
    cout << "sizeof(p):" << sizeof(man) << endl;    // 4    注意：静态成员、非静态成员函数、静态成员函数不属于对象上，不占内存空间
}


class NumberInt {
public:
    int value = 0;

    NumberInt(int value) {
        this->value = value;
    }

    NumberInt &add(int value) {
        this->value += value;
        return *this;   // 返回对象本身
    }
};

void test03(){
    NumberInt numberInt(10);
    // 链式编程
    numberInt = numberInt.add(10).add(10).add(10);
    cout << "numberInt.value:" << numberInt.value << endl;  // 40
}


int main() {
//    test01();
//    test02();
    test03();
}

