#include <iostream>
#include <limits>

using namespace std;

/**
 * 在堆区开辟一个int类型数据
 * @param a int值
 * @return 指针
 */
int *crateIntObj(int a) {
    int *p = new int(a);    // 利用new创建的数据 会返回该数据对应的类型的指针
    return p;
}

/**
 * 在堆区开辟一个数组
 * @param array
 * @return
 */
int * createIntArray(int array[]){
    int * p = new int[10];
    for (int i = 0; i < 10; ++i) {
        p[i] = array[i];
    }
    return p;
}


int main() {
    int *p = crateIntObj(13);
    // 输出值和地址
    cout << "值为：" << *p << "\t地址为：" << p << endl;
    // 使用delete释放堆区内存
    delete p;
    // 定义一个int数组
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    // 调用函数
    int *p1 = createIntArray(array);
    // 输出数组
    for (int i = 0; i < 10; ++i) {
        cout << p1[i] << "\t";
    }
    cout << endl;
    // 释放堆区内存
    delete[] p1;
}
