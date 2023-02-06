#include "circle.h"

// 构造函数
Circle::Circle(Point center, double radius) {
    this->center = center;
    this->radius = radius;
}

// 获取圆心
Point Circle::getCenter() {
    return center;
}

// 获取半径
double Circle::getRadius() {
    return radius;
}

// 设置圆心
void Circle::setCenter(Point center) {
    this->center = center;
}

// 设置半径
void Circle::setRadius(double radius) {
    this->radius = radius;
}