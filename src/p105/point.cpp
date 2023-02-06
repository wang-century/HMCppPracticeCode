#include "point.h"
#include <cmath>

// 构造函数
Point::Point() {
    this->x = 0;
    this->y = 0;
}

Point::Point(double x, double y) {
    this->x = x;
    this->y = y;
}

// 获取x坐标
double Point::getX() {
    return x;
}

// 获取y坐标
double Point::getY() {
    return y;
}

// 设置x坐标
void Point::setX(double x) {
    this->x = x;
}

// 设置y坐标
void Point::setY(double y) {
    this->y = y;
}

// 计算两点之间的距离
double Point::distance(Point p) {
    return sqrt(pow(x - p.getX(), 2) + pow(y - p.getY(), 2));
}