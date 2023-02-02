#include <iostream>

using namespace std;

int main() {
    // 获取键盘输入的整形
    int a;
    cin >> a;
    cout << "a = " << a << endl;
    // 获取键盘输入的浮点型
    float b;
    cin >> b;
    cout << "b = " << b << endl;
    // 获取键盘输入的字符
    char c;
    cin >> c;
    cout << "c = " << c << endl;
    // 获取键盘输入的字符串
    string d;
    cin >> d;
    cout << "d = " << d << endl;
    // 获取键盘输入的布尔值 注：只有0是false，其他数字都是true
    bool e;
    cin >> e;
    cout << "e = " << e << endl;
}