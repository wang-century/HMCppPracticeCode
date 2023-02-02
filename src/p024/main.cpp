#include <iostream>

using namespace std;

int main() {
    // if、else、if else语句的使用
    int a;
    cout << "请输入一个整数：" << endl;
    cin >> a;
    if (a > 0) {
        cout << "a是正数" << endl;
    } else if (a < 0) {
        cout << "a是负数" << endl;
    } else {
        cout << "a是0" << endl;
    }
}