#include<iostream>
using namespace std;

void evenOdd(int n) {
    if(n % 2 == 0) {
        cout << "Even Number";
    }else {
        cout << "Odd Number";
    }
}

int main() {
    evenOdd(6);
    return 0;
}