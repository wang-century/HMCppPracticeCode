#include <iostream>

using namespace std;

int main() {
    // 冒泡排序
    int a[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    int temp;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    // 输出数组
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }


}