#include <iostream>

using namespace std;

/**
 * 构造函数调用规则
 * 默认情况下，编译器会提供三个函数
 * 1.默认构造函数（无参，函数体为空）
 * 2.默认析构函数（无参，函数体为空）
 * 3.默认拷贝构造函数（对属性进行值拷贝）
 * 构造函数调用规则如下：
 * 1.如果用户定义有参构造函数，那么编译器不再提供默认无参构造，但是会提供默认拷贝构造
 * 2.如果用户定义拷贝构造函数，那么编译器不再提供其他构造函数
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
    /* 1.使用一个已经创建完毕的对象来初始化一个新对象 */
    Person p1(20);
    Person p2(p1);
}

void doPrint(Person p){
    cout << "doPrint函数调用" << endl;
}

void test02(){
    /* 2.值传递的方式给函数参数传值 */
    Person p;
    doPrint(p);
}

Person createPerson(){
    Person p1;
    cout << "函数内p1的地址：" << &p1 << endl;
    return p1;
}

void test03(){
    /* 3.值方式返回局部对象 */
    Person p1 = createPerson();
    cout << "函数外p1的地址：" << &p1 << endl;
}

int main() {
    test03();
}

