#include <iostream>
#include <limits>

using namespace std;

void printIntValue(const int &value){
    cout << "value = " << value << endl;
}

int main() {
    const int &ref = 10;    // 加上const之后，编译器将代码改为int temp = 10; const int &ref = temp;
    int a = 20;
    int &ref2 = a;
    printIntValue(ref);
}
