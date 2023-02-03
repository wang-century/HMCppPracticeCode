#include <iostream>

using namespace std;

int main() {
    // 二维数组的四种定义方式
    // 1.定义一个二维数组
    int arr[3][4] = {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
    };
    // 2.定义一个二维数组
    int arr2[3][4] = {
            1, 2, 3, 4,
            5, 6, 7, 8,
            9, 10, 11, 12
    };
    // 3.定义一个二维数组
    int arr3[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    // 4.定义一个二维数组
    int arr4[][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    /* 二维数组的使用：考试成绩统计 */
    // 1.声明一个二维数组
    int scores[3][4] = {
            {78, 89, 90, 99},
            {67, 78, 89, 90},
            {56, 67, 78, 89}
    };
    // 统计每个学生的总成绩
    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            sum += scores[i][j];
        }
        cout << "第" << i + 1 << "个学生的总成绩为：" << sum << endl;
    }


}