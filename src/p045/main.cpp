#include <iostream>

using namespace std;

int main() {
    // 定义一个含有5个元素的数组，并将元素逆置
    int a[5] = {1, 2, 3, 4, 5};
    int temp;
    for (int i = 0; i < 5 / 2; i++) {
        temp = a[i];
        a[i] = a[4 - i];
        a[4 - i] = temp;
    }
    // 输出数组
    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }

}