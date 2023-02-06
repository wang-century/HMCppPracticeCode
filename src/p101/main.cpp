#include <iostream>
#include <limits>

using namespace std;
/**
 * 访问权限：
 *  1.public 公共权限   类外可以访问
 *  2.protected 保护权限    类外不可以访问 子类可以访问
 *  3.private 私有权限  类外不可以访问 子类不可以访问
 */


class Person{
public:
    // 公共权限
    string p_name;
protected:
    // 保护权限
    string p_car;
private:
    // 私有权限
    string age;
};


int main() {
    Person p;
    p.p_name = "张三";
    // p.p_car = "奔驰";  // 保护权限，类外不可以访问
    // p.age = "18";  // 私有权限，类外不可以访问
}

