#include <iostream>
#include <limits>

using namespace std;

class Student {
public:
    string name;
    int id;

    Student(string name, int id) {
        this->name = name;
        this->id = id;
    }

    void setName(string name) {
        this->name = name;
    }

    void setID(int id) {
        this->id = id;
    }

    void print() {
        cout << "ID: " << id << "\tName: " << name << endl;
    }
};


int main() {
    Student s1("John", 1);
    s1.print();
    s1.setID(2);
    s1.setName("Jane");
    s1.print();
}

