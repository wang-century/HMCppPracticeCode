#include <iostream>
#include "person.hpp"

using namespace std;

/**
 * 类模板分文件编写
 * 解决:
 * 解决方式1∶直接包含.cpp源文件
 * 解决方式2∶将声明和实现写到同一个文件中，并更改后缀名为.hpp，hpp是约定的名称，并不是强制
 */



int main() {
    Person<string, int> person("Lily", 28);
    person.print();
}