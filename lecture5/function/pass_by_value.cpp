#include <iostream>
using namespace std;

int sum(int a, int b) {
    a = a + 10; // 15
    b = b + 10; //14

    return a + b;

}

int main() {
    int a = 5;
    int b = 4;
    cout << sum(a , b) << endl;
    cout << a << endl;
    cout << b << endl;

    return 0;
}