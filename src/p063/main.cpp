#include <iostream>

using namespace std;

/**
 * 使用指针将指定整形数组的值进行冒泡排序
 * @param array 整形数组
 */
void bubbleSortIntArray(int * array, int length){
    // 冒泡排序最多排数组长度-1次
    for (int i=0;i<length-1;i++){
        // 从已排好的位置开始，每次比较相邻两个元素，将较大的元素放在后面
        for (int j=0;j<length-1-i;j++){
            if (array[j]>array[j+1]){
                // 交换两个元素的值
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}


int main() {
    int array[] = {1, 3, 2, 5, 4};
    // 输出数组的值
    for (int i : array){
        cout << i << " ";
    }
    cout << endl;
    int length = sizeof(array) / sizeof(array[0]);
    bubbleSortIntArray(array, length);
    // 输出排序后的数组的值
    for (int i : array){
        cout << i << " ";
    }
}
