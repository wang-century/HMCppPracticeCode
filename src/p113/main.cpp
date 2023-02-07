#include <iostream>

using namespace std;

/**
 * 静态成员（加上static关键字）
 * 静态成员变量：
 *  1.所有对象共享同一份数据
 *  2.在编译阶段分配内存
 *  3.类内声明，类外初始化
 * 静态成员函数：
 *  1.所有对象共享同一份函数
 *  2.静态成员函数只能访问静态成员变量
 *
 */
class Person {
public:
    int age;
    int *height;
    static double money;

    Person() {
        this->age = 20;
        this->height = new int(180);
    }

    /**
     * 初始化列表初始化属性
     */
    Person(int age, int height) : age(age), height(new int(height)) {
        cout << "Person(int a)构造函数调用" << endl;
    }

    /**
     * 自定义拷贝构造函数，解决浅拷贝带来的问题
     */
    Person(const Person &person) {
        this->age = person.age;
        this->height = new int(*person.height); // 在堆区开辟空间
        cout << "Person拷贝构造函数调用" << endl;
    }

    static void print(Person &p) {
        cout << "age:" << p.age << "\theight:" << p.height << "\tmoney:" << money << endl;
    }


    ~Person() {
        // 释放堆区数据
        if (this->height != NULL) {
            delete this->height;
            this->height = NULL;
        }
        cout << "Person析构函数调用" << endl;
    }
};

double Person::money = 1000;    // 通过类名访问 对象外初始化

Person test01() {
    Person p1;
    p1.money = 2000;    // 修改数据 通过对象访问
    p1.print(p1);
    return p1;
}


int main() {
    cout << Person::money << endl;  // 1000
    Person p1 = test01();
    cout << Person::money << endl;  // 2000
    Person::print(p1);
}

