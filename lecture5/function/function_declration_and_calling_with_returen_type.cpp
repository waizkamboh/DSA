#include<iostream>
using namespace std;

int printHello() {
    cout << "Hello World\n";
    return 3;
}


int main() {
    
    int val = printHello();
    cout << "Val = " << val << endl;

    cout << printHello() << endl;
    return 0;
}