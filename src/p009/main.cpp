#include <iostream>

using namespace std;

int main() {
    cout << "short类型所占的字节数：" << sizeof(short) << endl;
    cout << "int类型所占的字节数：" << sizeof(int) << endl;
    cout << "long类型所占的字节数：" << sizeof(long) << endl;
    cout << "long long类型所占的字节数：" << sizeof(long long) << endl;
    cout << "float类型所占的字节数：" << sizeof(float) << endl;
    cout << "double类型所占的字节数：" << sizeof(double) << endl;
    cout << "long double类型所占的字节数：" << sizeof(long double) << endl;
    cout << "char类型所占的字节数：" << sizeof(char) << endl;
    cout << "bool类型所占的字节数：" << sizeof(bool) << endl;
}