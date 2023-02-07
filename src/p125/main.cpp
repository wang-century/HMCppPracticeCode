#include <iostream>

using namespace std;

class Person {
public:
    int *age;

    Person(int age) {
        this->age = new int(age);
    }

    /**
     * 相等关系运算符重载
     * @param person
     * @return
     */
    bool operator==(Person &person) {
        return (*this->age == *person.age);
    }

    /**
     * 不等关系运算符重载
     * @param person
     * @return
     */
    bool operator!=(Person &person){
        return (*this->age!=*person.age);
    }

    ~Person() {
        if (this->age != NULL) {
            delete this->age;
            this->age = NULL;
        }
    }

};


int main() {
    //test01();
    Person p1(10), p2(15), p3(10);
    cout << "p1==p2? " << (p1 == p2) << endl;
    cout << "p1==p3? " << (p1 == p3) << endl;
    cout << "p1!=p3? " << (p1 != p3) << endl;

}