#include <iostream>

using namespace std;
struct Student {
    string name;
    int age;
    int score;
};



int main() {
    // 创建结构体数组
    Student stuArray[3] = {
            {"张三", 18, 100},
            {"李四", 20, 99},
            {"王五", 22, 98}
    };
    // 结构体数组的元素赋值
    stuArray[0].name = "赵六";
    // 遍历数组
    for (int i = 0; i < 3; i++) {
        cout << "姓名：" << stuArray[i].name << " 年龄：" << stuArray[i].age << " 分数：" << stuArray[i].score << endl;
    }
}
