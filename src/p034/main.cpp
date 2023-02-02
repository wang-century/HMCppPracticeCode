#include <iostream>

using namespace std;

int main() {
    // 案例：使用do-while语句，求出所有3位数中的水仙花数
    // 水仙花数：一个3位数，其各位数字的立方和等于该数本身
    // 例如：153 = 1^3 + 5^3 + 3^3
    int i = 100;
    do {
        int a = i / 100;
        int b = i / 10 % 10;
        int c = i % 10;
        if (i == a * a * a + b * b * b + c * c * c) {
            cout << i << endl;
        }
        i++;
    } while (i < 1000);
}