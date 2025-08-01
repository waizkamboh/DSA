#include<iostream>
using namespace std;

int main(){
    int a = 4, b = 8;
    //Bitwise Operator
    cout << (a & b) << endl;
    //Bitwise OR
    cout << (a | b) << endl;
    //Bitwise XOR
    cout << (a ^ b) << endl;
    //Bitwise left shift
    cout << (4 << 1) << endl;
    //Bitwise right shift
    cout << (10 >> 1) << endl;
    //Operator precedence
    cout << (5 - 2 * 6) << endl;
    //Equal Operator Precedence
    cout << (4 * 5 % 2) << endl;
    return 0;
}