#include <iostream>
#include <limits>

using namespace std;

/**
 * 函数占位参数
 * 语法：返回值类型 函数名(数据类型)
 */
void func(int a, int) {
    cout << a << endl;
}



int main() {
    func(10,20);    // 占位参数必须填补
}

