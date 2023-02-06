#pragma once    // 防止头文件重复包含

#include <iostream>
#include "point.h"  // 包含点类的头文件

using namespace std;


/**
 * 圆的类
 */
class Circle {
private:
    Point center;   // 圆心
    double radius;  // 半径
public:
    // 构造函数
    Circle(Point center, double radius);

    // 获取圆心
    Point getCenter();

    // 获取半径
    double getRadius();

    // 设置圆心
    void setCenter(Point center);

    // 设置半径
    void setRadius(double radius);
};