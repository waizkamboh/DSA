#include<iostream>
using namespace std;

/*
 A A A A
   B B B
     C C
       D
*/

int main() {
    int n = 3;
    char ch = 'A';
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j <= n - i; j++)
        {
            cout << ch << " ";
            
        }
        ch ++ ;
        cout << endl;
        
    }
    
    return 0;
}