#include <iostream>
#include <limits>

using namespace std;
/**
 * 通讯录管理系统
 * 功能如下：
 * 添加联系人：信息包括：姓名、性别、年龄、电话、住址 最多1000人
 * 显示联系人：显示所有联系人信息
 * 删除联系人：按照姓名删除指定联系人
 * 查找联系人：按照姓名查找指定联系人
 * 修改联系人：按照姓名修改指定联系人
 * 清空联系人：清空所有联系人
 * 退出通讯录：退出当前通讯录管理系统
 */
#define ADDRESS_MAX 1000

// 定义结构体 人员信息
struct Person {
    int age;
    string name;
    string gender;
    string phone;
    string address;
};
// 通讯录结构体
struct AddressList {
    struct Person personArray[ADDRESS_MAX];
    int size;   // 当前通讯录人数
} addressList;

/**
 * 打印提示菜单
 */
void printMenu() {
    cout << "*************通讯录管理系统**************" << endl;
    cout << "************ 1.添加联系人 **************" << endl;
    cout << "************ 2.显示联系人 **************" << endl;
    cout << "************ 3.删除联系人 **************" << endl;
    cout << "************ 4.查找联系人 **************" << endl;
    cout << "************ 5.修改联系人 **************" << endl;
    cout << "************ 6.清空联系人 **************" << endl;
    cout << "************ 0.退出通讯录 **************" << endl;
    cout << "***************************************" << endl;
}

void pause() {
    // 输入任意键继续
    cout << "输入任意键继续..." << endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getchar();
}

/**
 * 打印单个联系人
 * @param person
 */
void printPerson(Person *person) {
    cout << "姓名: " << person->name << "\t";
    cout << "性别: " << person->gender << "\t";
    cout << "年龄: " << person->age << "\t";
    cout << "电话: " << person->phone << "\t";
    cout << "地址: " << person->address << endl;
}

/**
 * 显示联系人
 */
void printPersons(AddressList *ads) {
    // 判断通讯录人数是否为0
    if (ads->size == 0) {
        cout << "通讯录为空！" << endl;
        return;
    }
    // 打印输出personArray中的所有联系人
    for (int i = 0; i < ads->size; i++) {
        printPerson(&ads->personArray[i]);
    }
}

/**
 * 添加联系人
 */
void addPerson(AddressList *ads) {
    // 判断通讯录是否已满
    if (ads->size == ADDRESS_MAX) {
        cout << "通讯录已满，无法添加！" << endl;
        return;
    } else {
        // 添加联系人
        string name;
        cout << "请输入姓名：";
        cin >> name;
        ads->personArray[ads->size].name = name;
        // 性别
        string gender;
        while (true) {
            cout << "请输入性别: ";
            cin >> gender;
            if (gender != "男" && gender != "女") {
                cout << "输入有误，请重新输入！" << endl;
                continue;
            }
            ads->personArray[ads->size].gender = gender;
            break;
        }
        // 年龄
        int age;
        while (true) {
            cout << "请输入年龄：";
            cin >> age;
            if (age < 0 || age > 150) {
                cout << "输入有误，请重新输入！" << endl;
                continue;
            }
            ads->personArray[ads->size].age = age;
            break;
        }
        // 电话
        string phone;
        cout << "请输入电话: ";
        cin >> phone;
        ads->personArray[ads->size].phone = phone;
        // 地址
        string address;
        cout << "请输入地址: ";
        cin >> address;
        ads->personArray[ads->size].address = address;
        // 人数+1
        ads->size++;
        cout << "添加成功！" << endl;
    }
}

/**
 * 检测联系人是否存在 存在返回下标 不存在返回-1
 * @param name
 * @return
 */
int personExist(AddressList *ads, string name) {
    // 检测联系人是否存在
    for (int i = 0; i < ads->size; i++) {
        if (ads->personArray[i].name == name) {
            return i;
        }
    }
    return -1;
}

/**
 * 删除联系人
 * @param ads
 */
void deletePerson(AddressList *ads) {
    // 判断通讯录人数是否为0
    if (ads->size == 0) {
        cout << "通讯录为空！" << endl;
        return;
    }
    // 输入要删除的联系人姓名
    string name;
    cout << "请输入要删除的联系人姓名：";
    cin >> name;
    cout << name;
    // 判断联系人是否存在
    int existFlag = personExist(ads, name);
    cout << existFlag;
    if (existFlag != -1) {
        // 删除联系人
        for (int j = existFlag; j < ads->size; j++) {
            ads->personArray[j] = ads->personArray[j + 1];
        }
        ads->size--;
        cout << "删除成功！" << endl;
        return;
    }
    cout << "联系人不存在！" << endl;
}

/**
 * 按姓名查找联系人
 * @param ads
 */
void selectPersonByName(AddressList *ads) {
    // 按姓名查找
    string name;
    cout << "请输入要查找的联系人姓名：";
    cin >> name;
    // 判断联系人是否存在
    int existFlag = personExist(ads, name);
    if (existFlag != -1) {
        printPerson(&ads->personArray[existFlag]);
        return;
    }
    cout << "联系人不存在！" << endl;
}

/**
 * 修改联系人信息
 * @param ads
 */
void updatePerson(AddressList *ads) {
    // 判断联系人是否存在
    string name;
    string gender;
    string phone;
    string address;
    int age;
    cout << "请输入要修改的联系人姓名：";
    cin >> name;
    // 判断联系人是否存在
    int existFlag = personExist(ads, name);
    if (existFlag != -1) {
        // 修改联系人信息
        int choice;
        cout << "请选择要修改的信息：" << endl;
        cout << "1.姓名" << endl;
        cout << "2.性别" << endl;
        cout << "3.年龄" << endl;
        cout << "4.电话" << endl;
        cout << "5.地址" << endl;
        cin >> choice;
        switch (choice) {
            case 1:
                // 修改姓名
                cout << "请输入姓名: ";
                cin >> name;
                ads->personArray[existFlag].name = name;
                cout << "修改成功！" << endl;
                break;
            case 2:
                // 修改性别
                while (true) {
                    cout << "请输入性别: ";
                    cin >> gender;
                    if (gender != "男" && gender != "女") {
                        cout << "输入有误，请重新输入！" << endl;
                        continue;
                    }
                    ads->personArray[existFlag].gender = gender;
                    break;
                }
                cout << "修改成功！" << endl;
                break;
            case 3:
                // 修改年龄
                while (true) {
                    cout << "请输入年龄：";
                    cin >> age;
                    if (age < 0 || age > 150) {
                        cout << "输入有误，请重新输入！" << endl;
                        continue;
                    }
                    ads->personArray[existFlag].age = age;
                    break;
                }
                cout << "修改成功！" << endl;
                break;
            case 4:
                // 修改电话
                cout << "请输入电话: ";
                cin >> phone;
                ads->personArray[existFlag].phone = phone;
                cout << "修改成功！" << endl;
                break;
            case 5:
                // 修改地址
                cout << "请输入地址: ";
                cin >> address;
                ads->personArray[existFlag].address = address;
                cout << "修改成功！" << endl;
                break;
            default:
                cout << "输入有误，请重新输入！" << endl;
        }
        return;
    }
    cout << "联系人不存在！" << endl;
}

/**
 * 清空通讯录
 * @param ads
 */
void clearPersons(AddressList *ads) {
    // 清空通讯录
    ads->size = 0;
    cout << "清空成功！" << endl;
}


int main() {
    // 初始化通讯录结构体
    addressList.size = 0;
    // 添加测试数据
    addressList.size = 1;
    addressList.personArray[0].name = "张三";
    addressList.personArray[0].gender = "男";
    addressList.personArray[0].age = 20;
    addressList.personArray[0].phone = "123456789";
    addressList.personArray[0].address = "北京市";
    int choice = -1;
    while (choice != 0) {
        // 判断是否需要暂停
        if (choice != -1) {


        }
        printMenu();    // 打印菜单
        cout << "请输入您的选择：" << endl;
        cin >> choice;
        switch (choice) {
            case 0:
                cout << "退出通讯录" << endl;
                return 0;
            case 1:
                cout << "添加联系人" << endl;
                addPerson(&addressList);
                break;
            case 2:
                cout << "显示联系人" << endl;
                printPersons(&addressList);
                break;
            case 3:
                cout << "删除联系人" << endl;
                deletePerson(&addressList);
                break;
            case 4:
                cout << "查找联系人" << endl;
                selectPersonByName(&addressList);
                break;
            case 5:
                cout << "修改联系人" << endl;
                updatePerson(&addressList);
                break;
            case 6:
                cout << "清空联系人" << endl;
                clearPersons(&addressList);
                break;
            default:
                cout << "输入错误，请重新输入！" << endl;
                continue;
        }
    }
}
