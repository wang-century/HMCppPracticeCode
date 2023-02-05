#include <iostream>

using namespace std;
// 学生结构体
struct Student {
    string name;
    int age;
    int score;
};

void printStudentArray(const Student *stuArray, int length) {
    for (int i = 0; i < length; i++) {
        cout << "姓名：" << stuArray[i].name << " 年龄：" << stuArray[i].age << " 分数：" << stuArray[i].score << endl;
    }
}

/**
 * 冒泡排序对学生数组进行升序排序
 * @param stuArray 学生数组
 * @param length 数组长度
 */
void sortStudentByAge(Student *stuArray, int length) {
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - 1 - i; j++) {
            if (stuArray[j].age > stuArray[j + 1].age) {
                Student temp = stuArray[j];
                stuArray[j] = stuArray[j + 1];
                stuArray[j + 1] = temp;
            }
        }
    }
}

int main() {
    // 定义一个含有7个学生的结构体数组
    struct Student stuArr[7] = {
            {"张三", 18, 100},
            {"李四", 19, 99},
            {"王五", 20, 98},
            {"赵六", 21, 97},
            {"田七", 26, 96},
            {"孙八", 23, 95},
            {"周九", 24, 94}
    };
    int length = sizeof(stuArr) / sizeof(stuArr[0]);
    // 排序
    sortStudentByAge(stuArr, length);
    // 打印排序后的结果
    printStudentArray(stuArr, length);
}
