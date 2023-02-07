#include <iostream>

using namespace std;

/**
 * 虚析构和纯虚析构
 * 多态使用时，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构代码
 * 解决方式:将父类中的析构函数改为虚析构或者纯虚析构
 *
 * 虚析构和纯虚析构共性:
 * 可以解决父类指针释放子类对象
 * 都需要有具体的函数实现
 *
 * 虚析构和纯虚析构区别:
 * 如果是纯虚析构，该类属于抽象类，无法实例化对象
 */

class Animal {
public:
    virtual void speak() = 0;    // 纯虚函数
    /**
     * 1.虚析构解决父类指针释放子类对象
     */
//    virtual ~Animal() {
//        cout << "动物析构" << endl;
//    }
    virtual ~Animal() = 0;    // 2.使用纯虚析构
};

Animal::~Animal() {
    cout << "纯虚析构" << endl;
}

class Cat : public Animal {
public:
    string *name;

    Cat() {
        this->name = new string("");
    }

    Cat(string name) {
        this->name = new string(name);
    }

    virtual void speak() {
        cout << "小猫在说话" << endl;
    }

    virtual ~Cat() {
        if (this->name != NULL) {
            delete this->name;
            this->name = NULL;
        }
        cout << "小猫析构" << endl;
    }
};

int main() {
    Animal *animal = new Cat("Tom");
    animal->speak();
    delete animal;
}