#include <iostream>

using namespace std;
/**
 * 结构体的定义
 * 语法：struct 结构体名称 { 成员列表 };
 */
// 1.创建学生数据类型
struct Student {
    string name;
    int age;
    int score;
}stu3;    // (3) 在定义结构体时顺便创建变量



int main() {
    // 2.通过学生类型创建变量：
    // (1) struct Student stu;
    struct Student stu1;    // struct关键字可以省略
    // 属性赋值
    stu1.name = "张三";
    stu1.age = 18;
    stu1.score = 100;
    cout << "姓名:" << stu1.name << " 年龄:" << stu1.age << " 分数:" << stu1.score << endl;
    // (2) struct Student stu = {};
    struct Student stu2 = {"李四", 20, 99};
    cout << "姓名:" << stu2.name << " 年龄:" << stu2.age << " 分数:" << stu2.score << endl;
    // (3) 在定义结构体时顺便创建变量
    stu3.name = "王五";
    stu3.age = 19;
    stu3.score = 98;
    cout << "姓名:" << stu3.name << " 年龄:" << stu3.age << " 分数:" << stu3.score << endl;
}
