#include <iostream>

using namespace std;
// 学生结构体
struct Student {
    string name;
    int age;
    int score;
};
/**
 * 输出学生信息
 * @param stu
 */
void printStudent(Student stu){
    cout << "姓名: " << stu.name << " 年龄: " << stu.age << " 分数: " << stu.score << endl;
}
/**
 * 使用值传递尝试修改结构体中的成员变量
 * @param stu
 */
void useValueChange(struct Student stu){
    stu.name = "李四";
    stu.age = 20;
    stu.score = 99;
}
/**
 * 使用地址传递尝试修改结构体中的成员变量
 * @param stu
 */
void useAddressChange(struct Student *stu){
    stu->name = "李四";
    stu->age = 20;
    stu->score = 99;
}

/**
 * 结构体做函数参数
 * 作用:将结构体作为参数向函数中传递传递方式有两种: 值传递、地址传递
 * @return
 */
int main() {
    // 定义一个学生结构体变量
    struct Student stu = {"张三", 18, 100};
    // 值传递
    useValueChange(stu);
    printStudent(stu);  // 修改失败
    // 地址传递
    useAddressChange(&stu);
    printStudent(stu);  // 修改成功
}
