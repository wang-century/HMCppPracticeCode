#include <iostream>

using namespace std;

class Person {
public:
    int *age;

    Person(int age) {
        this->age = new int(age);
    }

    ~Person() {
        if (this->age != NULL) {
            delete this->age;
            this->age = NULL;
        }
    }

    /**
     * 重载赋值运算符
     * @param person
     */
    Person &operator=(Person &person) {
        // 先判断是否有属性在堆区，如果有先释放
        if (this->age != NULL) {
            delete this->age;
            this->age = NULL;
        }
        this->age = new int(*person.age);
        return *this;
    }
};

void test01() {
    Person person1(19);
    Person person2(20);
    person2 = person1;  // 赋值操作
    cout << "person1.age = " << *person1.age << endl;
    cout << "person2.age = " << *person2.age << endl;
}

int main() {
    //test01();
    Person p1(10), p2(15), p3(30);
    p1 = p2 = p3;
    cout << "p1.age = " << *p1.age << endl;
    cout << "p2.age = " << *p2.age << endl;
    cout << "p3.age = " << *p3.age << endl;


}