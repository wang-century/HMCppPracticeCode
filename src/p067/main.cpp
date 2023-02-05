#include <iostream>

using namespace std;
// 学生结构体
struct Student {
    string name;
    int age;
    int score;
};
// 老师结构体
struct Teacher {
    int id;
    string name;
    int age;
    string className;   // 科目
    int salary;
    struct Student student; // 结构体嵌套结构体
};


/**
 * 结构体嵌套结构体
 */
int main() {
    Student stu = {"张三", 18, 100};
    Teacher tea = {1, "李四", 30, "语文", 10000, stu};
    // 输出tea的数据
    cout << "老师编号:" << tea.id << " 老师姓名:" << tea.name << " 老师年龄:" << tea.age << " 老师科目:" << tea.className << " 老师工资:" << tea.salary << endl;
    // 输出tea的学生数据
    cout << "老师辅导的学生信息：\n姓名:" << tea.student.name << " 学生年龄:" << tea.student.age << " 学生成绩:" << tea.student.score << endl;
}
