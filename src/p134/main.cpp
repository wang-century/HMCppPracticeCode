#include <iostream>

using namespace std;

/**
 * 虚基类
 */
class Animal{
public:
    int age;
};
/**
 * 虚继承
 */
class Sheep:virtual public Animal{
public:
    int age;
};

class Camel:virtual public Animal{

};
/**
 * 菱形继承，继承了两份数据，浪费资源
 * 使用虚继承，解决继承两份数据的问题
 */
class SheepCamel:public Sheep, public Camel{

};

int main() {
    SheepCamel sheepCamel;
    // 当菱形继承，两个父类拥有相同的成员变量时，子类对象访问时，会出现二义性 需要加作用域区分
    sheepCamel.Sheep::age = 18;
    sheepCamel.Camel::age = 20;
    cout << sheepCamel.Sheep::age << endl;
    cout << sheepCamel.Camel::age << endl;

}