#include <iostream>

using namespace std;

int main() {
    // 数组的定义
    int arr[5] = {1, 2, 3, 4, 5};
    // 打印数组大小
    cout << "数组所占内存空间：" << sizeof(arr) << endl;
    cout << "每个数组元素所占空间：" << sizeof(arr[0]) << endl;
    cout << "数组元素个数：" << sizeof(arr) / sizeof(arr[0]) << endl;
    cout << "数组首地址：" << arr << endl;
    cout << "数组第一个元素地址：" << &arr[0] << endl;
    cout << "数组第二个元素地址：" << &arr[1] << endl;
    // 数组的遍历
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }
}