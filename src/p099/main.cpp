#include <iostream>
#include <limits>

using namespace std;

/**
 * 类和对象
 * C++面向对象三大特性：封装、继承、多态
 *
 * 封装的意义：
 *  1.将属性和行为作为一个整体，表现生活中的事物
 *  2.将属性和行为加以权限控制
 * 语法：class 类名 {访问权限: 属性/行为};
 * @return
 */

class Circle {
    /**
     * 案例：设计一个圆类，求圆的周长
     */
public:
    // 属性
    double r;

    /**
     * 计算周长
     * @return
     */
    double calculatePerimeter() {
        return 2 * 3.14 * r;
    }
};


int main() {
    // 创建对象
    Circle circle;
    // 给属性赋值
    circle.r = 10;
    // 调用成员函数
    cout << "周长为：" << circle.calculatePerimeter() << endl;
}

