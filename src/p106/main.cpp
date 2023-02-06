#include <iostream>

using namespace std;

/**
 * 构造函数和析构函数
 * 作用：初始化和释放资源
 * 构造函数语法：类名(){}
 * 析构函数语法：~类名(){}
 * @return
 */
class Person {
public:
    Person() {
        cout << "Person()" << endl;
    }

    ~Person() {
        cout << "~Person()" << endl;
    }
};

void test01() {
    Person p;
}

int main() {
    // 测试构造函数和析构函数
    test01();
}

