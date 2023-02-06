#include <iostream>
#include <limits>

using namespace std;
/**
 * 引用作为重载函数的参数
 * @param a
 */
void printInt(int &a){
    cout<<"int &" << a << endl;
}
void printInt(const int &a){
    cout <<"调用const int &" << a << endl;
}

void printInt2(int a, int b=10){
    cout << "调用int a, int b=10" << a << endl;
}
void printInt2(int a){
    cout <<"调用int" << a << endl;
}

int main() {
    int a = 10;
    printInt(a);    // 调用的是printInt(int &a)
    printInt(10);   // 调用的是printInt(const int &a)
    // printInt2(a);   // 有二义性，尽量避免这种情况
}

