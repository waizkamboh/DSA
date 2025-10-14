#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* ptr = &a;
    int** parentPtr = &ptr;
    float price = 100.25;
    float* ptr2 = &price;
    float** parentPtr2 = &ptr2;
    cout << ptr << endl;
    cout << &a << endl;
    cout << ptr2 << endl;
    cout << &price << endl;
    cout << parentPtr << endl;
    cout << parentPtr2 << endl;
    return 0;
}