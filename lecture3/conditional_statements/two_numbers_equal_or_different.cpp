#include<iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter first number";
    cin >> x;
    cout << "Enter second number";
    cin >> y;
    if(x == y) {
        cout << "Numbers are equal";
    }else {
        cout << "Numbers are different";   
    }
}