#include <iostream>

using namespace std;

int main() {
    // while语句的使用: 猜数字
    int num = 10;
    int guess = 0;
    while (guess != num) {
        cout << "请输入你猜的数字: " << endl;
        cin >> guess;
        if (guess > num) {
            cout << "猜大了" << endl;
        } else if (guess < num) {
            cout << "猜小了" << endl;
        } else {
            cout << "猜对了" << endl;
        }
    }
}