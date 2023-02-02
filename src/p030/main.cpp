#include <iostream>

using namespace std;

int main() {
    // switch语句的使用
    int a;
    cout << "请输入一个整数：" << endl;
    cin >> a;
    switch (a) {
        case 1:
            cout << "a = 1" << endl;
            break;
        case 2:
            cout << "a = 2" << endl;
            break;
        case 3:
            cout << "a = 3" << endl;
            break;
        default:
            cout << "a不属于预定值：" << a << endl;
            break;
    }

}