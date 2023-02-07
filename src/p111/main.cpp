#include <iostream>

using namespace std;

/**
 * 初始化列表
 * 语法：构造函数名(参数列表) : 属性1(值1), 属性2(值2), 属性3(值3) {...}
 */
class Person {
public:
    int age;
    int *height;

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
    Person p1(20, 170);
    cout << "p1的年龄为：" << p1.age << "\t身高为：" << *p1.height << endl;
    Person p2(p1);
    cout << "p2的年龄为：" << p2.age << "\t身高为：" << *p2.height << endl;
}


int main() {
    test01();
}

