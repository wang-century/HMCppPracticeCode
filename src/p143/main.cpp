#include <iostream>
#include <fstream>

using namespace std;

/**
 * 文件操作
 * 操作文件的三大类：
 * 1. ofstream 写文件
 * 2. ifstream 读文件
 * 3. fstream 读写文件
 */

/**
 * 写文本文件操作
 */
void writeTextToFile() {
    // 1.包含头文件 fstream
    // 2.创建流对象
    ofstream ofs;
    // 3.打开文件 ofs.open("文件路径",打开方式)
    /*
     * 打开方式：
     * ios::in  读文件
     * ios::out 写文件
     * ios::ate 初始位置：文件尾部
     * ios::app 追加方式写文件
     * ios::trunc   如果文件存在，先删除，再创建
     * ios::binary  二进制方式
     * 例如：用二进制方式写文件 ios::binary | ios::out
     */
    ofs.open("files/text.txt", ios::out);
    // 4.写数据
    ofs << "姓名：张三" << endl;
    ofs << "年龄：18" << endl;
    ofs << "性别：男" << endl;
    // 5.关闭文件
    ofs.close();
}

/**
 * 读文本文件操作
 */
void readTextFromFile() {
    // 1.包含头文件 fstream
    // 2.创建流对象
    ifstream ifs;
    // 3.打开文件 ifs.open("文件路径",打开方式)
    /*
     * 打开方式：
     * ios::in  读文件
     * ios::out 写文件
     * ios::ate 初始位置：文件尾部
     * ios::app 追加方式写文件
     * ios::trunc   如果文件存在，先删除，再创建
     * ios::binary  二进制方式
     * 例如：用二进制方式写文件 ios::binary | ios::out
     */
    ifs.open("files/text.txt", ios::in);
    // 判断文件是否打开
    if (!ifs.is_open()) {
        cout << "文件打开失败" << endl;
        return;
    }
    // 4.读数据
    // (1) 方式一
//    char buf[1024] = {0};
//    while (ifs>>buf){
//        cout << buf << endl;
//    }
    // (2) 方式二
//    char buf[1024] = {0};
//    while (ifs.getline(buf,sizeof(buf))){
//        cout << buf << endl;
//    }
    // (3) 方式三
//    string data;
//    while (getline(ifs,data)){
//        cout << data << endl;
//    }
    // (4) 方式四
    char c;
    while ((c = ifs.get()) != EOF) {
        cout << c;
    }

    // 5.关闭文件
    ifs.close();
}

class Person {
public:
    char name[40];
    int age;
};

/**
 * 写二进制文件操作
 */
void writeBinaryToFile() {
    // 1.包含头文件 fstream
    // 2.创建流对象
    ofstream ofs;
    // 3.打开文件 ofs.open("文件路径",打开方式)
    /*
     * 打开方式：
     * ios::in  读文件
     * ios::out 写文件
     * ios::ate 初始位置：文件尾部
     * ios::app 追加方式写文件
     * ios::trunc   如果文件存在，先删除，再创建
     * ios::binary  二进制方式
     * 例如：用二进制方式写文件 ios::binary | ios::out
     */
    ofs.open("files/person.txt", ios::out | ios::binary);
    // 4.写数据
    Person person = {"张三", 18};
    ofs.write((const char *) &person, sizeof(person));
    // 5.关闭文件
    ofs.close();
}

/**
 * 读二进制文件操作
 */
void readBinaryFromFile() {
    // 1.包含头文件 fstream
    // 2.创建流对象
    ifstream ifs;
    // 3.打开文件 ifs.open("文件路径",打开方式)
    /*
     * 打开方式：
     * ios::in  读文件
     * ios::out 写文件
     * ios::ate 初始位置：文件尾部
     * ios::app 追加方式写文件
     * ios::trunc   如果文件存在，先删除，再创建
     * ios::binary  二进制方式
     * 例如：用二进制方式写文件 ios::binary | ios::out
     */
    ifs.open("files/person.txt", ios::in | ios::binary);
    // 判断文件是否打开
    if (!ifs.is_open()) {
        cout << "文件打开失败" << endl;
        return;
    }
    // 4.读数据
    Person person;
    ifs.read((char *) &person, sizeof(person));
    cout << "姓名: " << person.name << "\t年龄:" << person.age << endl;
    // 5.关闭文件
    ifs.close();
}

int main() {
//    writeTextToFile();
//    readTextFromFile();
//    writeBinaryToFile();
    readBinaryFromFile();
}