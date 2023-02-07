#include <iostream>

using namespace std;


class Building;

class GoodGay {
public:
    GoodGay();

    Building *building;

    void visit();   // 访问building中的私有属性
    void visit2();  // 不能访问building中的私有属性
};

class Building {
    friend void GoodGay::visit();   // 好基友类中的visit函数是Building的好朋友，可以访问Building中的私有成员
private:
    string bedRoom;
public:
    string livingRoom;

    Building();
};

Building::Building() {
    bedRoom = "卧室";
    livingRoom = "客厅";
}

GoodGay::GoodGay() {
    building = new Building();
}

void GoodGay::visit() {
    cout << "好基友正在访问：" << building->livingRoom << endl;
    cout << "好基友正在访问：" << building->bedRoom << endl;
}

void GoodGay::visit2() {
    cout << "好基友正在访问：" << building->livingRoom << endl;
    // cout << "好基友正在访问：" << building->bedRoom << endl;    // 不能访问
}

int main() {
    GoodGay goodGay;
    goodGay.visit();
    goodGay.visit2();
}