#include <iostream>

using namespace std;

/**
 * 深拷贝与浅拷贝
 * 浅拷贝：简单的赋值拷贝操作
 * 深拷贝：在堆区重新申请空间，进行拷贝操作
 */
class Person {
public:
    int age;
    int *height;

    /**
     * 普通构造函数
     */
    Person() {
        cout << "Person()构造函数调用" << endl;
    }

    Person(int age, int height) {
        this->age = age;
        this->height = new int(height); // 在堆区开辟空间
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


    ~Person() {
        // 释放堆区数据
        if (this->height != NULL) {
            delete this->height;
            this->height = NULL;
        }
        cout << "Person析构函数调用" << endl;
    }
};

void test01() {
    // 浅拷贝带来的问题是：堆区的数据被释放了两次
    Person p1(18, 170);
    cout << "p1的年龄为：" << p1.age << "\t身高为：" << *p1.height << endl;
    Person p2(p1);
    cout << "p2的年龄为：" << p2.age << "\t身高为：" << *p2.height << endl;
}




int main() {
    test01();
}

