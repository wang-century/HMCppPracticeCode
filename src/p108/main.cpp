#include <iostream>

using namespace std;

/**
 * 拷贝构造函数调用时机
 *  1.使用一个已经创建完毕的对象来初始化一个新对象
 *  2.值传递的方式给函数参数传值
 *  3.值方式返回局部对象
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

