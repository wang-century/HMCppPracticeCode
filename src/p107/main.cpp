#include <iostream>

using namespace std;

/**
 * 构造函数的分类以及调用
 * 两种分类方式：
 *  按参数分：无参构造、有参构造
 *  按类型分：普通构造、拷贝构造
 *
 * 三种调用方式：
 *  1.括号法
 *  2.显示法
 *  3.隐式转换法
 * @return
 */
class Person {
public:
    int age;
    /**
     * 普通构造函数
     */
    Person() {
        cout << "Person()构造函数调用" << endl;
    }

    Person(int age) {
        this->age = age;
        cout << "Person(int a)构造函数调用" << endl;
    }

    /**
     * 拷贝构造函数
     * 将传入的对象拷贝给本对象
     */
    Person(const Person &person) {
        this->age = person.age;
        cout << "Person拷贝构造函数调用" << endl;
    }


    ~Person() {
        cout << "Person析构函数调用" << endl;
    }
};

void test01() {
    /* 1.括号法 */
    Person p;   // 默认构造函数调用
    Person p2(10);  // 有参构造函数调用
    cout << "p2的年龄为：" << p2.age << endl;
    Person p3(p2);   // 拷贝构造函数调用
    cout << "p2的年龄为：" << p2.age << endl;
    cout << "p3的年龄为：" << p3.age << endl;
}

void test02(){
    /* 2.显示法 */
    Person p;   // 默认构造函数调用
    Person p2 = Person(10); // 意义为Person(10)匿名对象，然后将匿名对象赋值给p2
    Person p3 = Person(p2);
    // 注意：显示法不要利用拷贝构造函数初始化匿名对象 编译器会认为Person(p3) === Person p3;
    // Person p4 = Person(p3); // 错误
}

void test03(){
    /* 3.隐式转换法 */
    Person p1 = 10; // 相当于Person p1 = Person(10);
    Person p2 = p1; // 拷贝构造
}

int main() {
    // 测试构造函数和析构函数
    test01();
}

