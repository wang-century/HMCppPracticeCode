#pragma once    // 防止头文件重复包含

#include <iostream>

using namespace std;


/**
 * 点的类
 */
class Point {
private:
    double x;
    double y;
public:
    // 构造函数
    Point();

    Point(double x, double y);

    // 获取x坐标
    double getX();

    // 获取y坐标
    double getY();

    // 设置x坐标
    void setX(double x);

    // 设置y坐标
    void setY(double y);

    // 计算两点之间的距离
    double distance(Point p);
};