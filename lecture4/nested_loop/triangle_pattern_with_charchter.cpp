#include<iostream>
using namespace std;

/*

A 
B B
C C C 
D D D D

*/
int main() {
    int n = 4;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j <= i; j++)
       {
           cout << ch << ' ';
       }
        ch++;
        cout << endl;
    }
    
}