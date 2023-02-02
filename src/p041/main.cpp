#include <iostream>

using namespace std;

int main() {
    // goto跳转语句的使用
    int i = 0;
    while (i < 10) {
        if (i == 5) {
            goto end;
        }
        cout << i << endl;
        i++;
    }
    end:
    cout << "end" << endl;
}