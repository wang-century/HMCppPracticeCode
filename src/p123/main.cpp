#include <iostream>

using namespace std;

class MyInteger {
    friend ostream &operator<<(ostream &out, const MyInteger &myInteger);

private:
    int value;
public:
    MyInteger() {
        value = 0;
    }

    MyInteger(int value) {
        this->value = value;
    }

    /**
     * 前置++
     * @return
     */
    MyInteger &operator++() {
        this->value++;
        return *this;
    }

    /**
     * 后置++
     * 要在参数中加一个int，否则会和前置++冲突
     * @return
     */
    MyInteger operator++(int) {
        // 先记录当时的结构
        MyInteger temp = *this;
        this->value++;
        return temp;
    }
};


ostream &operator<<(ostream &out, const MyInteger &myInteger) {
    out << myInteger.value;
    return out;
}


int main() {
    MyInteger myInteger;
    cout << myInteger << endl;
    cout << ++myInteger << endl;
    cout << myInteger++ << endl;
    cout << myInteger << endl;
}