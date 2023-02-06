#include <iostream>
#include <limits>

using namespace std;

/**
 * 内存四区
 *  1.代码区：存放函数体的二进制代码，由操作系统进行管理
 *  2.全局区：存放全局变量和静态变量以及常量
 *  3.栈区：由编译器自动分配释放，存放函数的参数值、局部变量等
 *  4.堆区：由程序员分配和释放，若程序员不释放，程序结束时由操作系统回收
 */
/**
 * 在堆区开辟一个int类型数据
 * @param a int值
 * @return 指针
 */
int *crateIntObj(int a) {
    int *p = new int(a);
    return p;
}


int main() {
    int *p = crateIntObj(13);
    // 输出值和地址
    cout << "值为：" << *p << "\t地址为：" << p << endl;
}
