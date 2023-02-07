#include <iostream>

using namespace std;

/**
 * 友元的关键字为friend
 * 友元的三种实现
 * 1.全局函数做友元
 * 2.类做友元
 * 3.成员函数做友元
 */

class Building {
    friend void goodFriend(Building &building); // 全局函数做友元
public:
    string livingRoom;  // 客厅
    Building() {
        livingRoom = "客厅";
        bedRoom = "卧室";
    }

private:
    string bedRoom; // 卧室
};


/**
 * 全局函数
 * @param building
 */
void goodFriend(Building &building) {
    cout << "好朋友正在访问：" << building.livingRoom << endl;
    cout << "好朋友正在访问：" << building.bedRoom << endl; // 私有成员，全局函数做友元，可以访问
}


class House {
    friend class GoodFriend; // 类做友元
public:
    string livingRoom;  // 客厅
    House(string name) {
        livingRoom = name + "的客厅";
        bedRoom = name + "的卧室";
    }

private:
    string bedRoom; // 卧室
};

class GoodFriend {
public:
    string name;
    House *house;

    GoodFriend(string name) {
        this->name = name;
        house = new House(name);
    }

    void visit(GoodFriend &goodFriend);   // 访问Building中的属性
};

/**
 * 类外实现成员函数
 */
void GoodFriend::visit(GoodFriend &goodFriend) {
    cout << "好朋友正在访问：" << goodFriend.house->livingRoom << endl;
    cout << "好朋友正在访问：" << goodFriend.house->bedRoom << endl; // 私有成员，成员函数做友元，可以访问
}


int main() {
    // 全局函数做友元
//    Building building;
//    goodFriend(building);
    // 类做友元
    GoodFriend goodFriend1("张三");
    GoodFriend goodFriend2("李四");
    goodFriend1.visit(goodFriend2);

}

