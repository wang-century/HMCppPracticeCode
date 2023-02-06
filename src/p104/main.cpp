#include <iostream>
#include <limits>

using namespace std;

class Cube{
private:
    double length;  // 长
    double width;   // 宽
    double height;  // 高
public:
    // 设置属性值
    void setLength(double len){
        this->length = len;
    }
    void setWidth(double wid){
        this->width = wid;
    }
    void setHeight(double hei){
        this->height = hei;
    }
    // 获取属性值
    double getLength(){
        return this->length;
    }
    double getWidth() {
        return this->width;
    }
    double getHeight() {
        return this->height;
    }
    // 计算体积
    double getVolume(){
        return this->length * this->width * this->height;
    }
    // 计算表面积
    double getArea(){
        return 2 * (this->length * this->width + this->length * this->height + this->width * this->height);
    }
    // 判断两个立方体是否相等
    bool isEqual(Cube &cube){
        if (this->length == cube.getLength() && this->width == cube.getWidth() && this->height == cube.getHeight()){
            return true;
        }
        return false;
    }
};

/**
 * 判断两个立方体是否相等
 * @param cube1
 * @param cube2
 * @return
 */
bool cubeIsEqual(Cube cube1, Cube cube2){
    if (cube1.getLength() == cube2.getLength() && cube1.getWidth() == cube2.getWidth() && cube1.getHeight() == cube2.getHeight()){
        return true;
    }
    return false;
}

int main() {
    // 创建对象
    Cube cube, cube2;
    // 设置属性值
    cube.setLength(10);
    cube.setWidth(10);
    cube.setHeight(10);
    cube2.setLength(10);
    cube2.setWidth(10);
    cube2.setHeight(10);
    // 获取属性值
    cout << "长：" << cube.getLength() << endl;
    cout << "宽：" << cube.getWidth() << endl;
    cout << "高：" << cube.getHeight() << endl;
    // 计算体积
    cout << "体积：" << cube.getVolume() << endl;
    // 计算表面积
    cout << "表面积：" << cube.getArea() << endl;
    // 判断两个立方体是否相等
    cout << "两个立方体是否相等：" << cubeIsEqual(cube, cube2) << endl;
    cout << "两个立方体是否相等：" << cube.isEqual(cube2) << endl;
}

