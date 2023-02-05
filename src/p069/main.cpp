#include <iostream>

using namespace std;
// 学生结构体
struct Student {
    string name;
    int age;
    int score;
};

/**
 * 输出学生信息 添加const防止修改
 * @param stu
 */
void printStudent(const Student *stu) {
    // stu->name = "wan"; // 不能修改
    cout << "姓名：" << stu->name << "年龄：" << stu->age << "分数：" << stu->score << endl;
}

int main() {
    // 定义一个学生结构体变量
    struct Student stu = {"张三", 18, 100};
    // 输出学生信息
    printStudent(&stu);
}
