#include<iostream>
using namespace std;
/*
A B C
D E F
G H I
*/
int main() {
 int n = 3;
 char ch = 'A';
 for (int i = 0; i < n; i++)
 {
    for (int j = 0; j < n; j++)
    {
        cout << ch << ' ';
        ch++;
    }
    cout << endl;
 }
 
}