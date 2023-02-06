#include <iostream>
#include "point.h"
#include "circle.h"

using namespace std;


/**
 * 判断点在圆内还是圆外
 * @param c
 * @param p
 */
void inOrOut(Circle &c, Point &p) {
    double distance = c.getCenter().distance(p);
    if (distance < c.getRadius()) {
        cout << "点在圆内" << endl;
    } else if (distance == c.getRadius()) {
        cout << "点在圆上" << endl;
    } else {
        cout << "点在圆外" << endl;
    }
}


int main() {
    // 创建点和圆
    Point p(1, 1);
    Circle c(Point(0, 0), 2);
    // 判断点在圆内还是圆外
    inOrOut(c, p);
}

