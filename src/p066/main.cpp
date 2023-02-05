#include <iostream>

using namespace std;

struct Student {
    string name;
    int age;
    int score;
};


/**
 * 结构体指针
 * 作用：通过指针访问结构体成员 使用->操作符
 */
int main() {
    Student stu = {"张三", 18, 100};
    // 指针指向结构体变量
    Student *p = &stu;
    // 通过指针访问结构体成
    cout << "姓名:" << p->name << " 年龄:" << p->age << " 分数:" << p->score << endl;
}
