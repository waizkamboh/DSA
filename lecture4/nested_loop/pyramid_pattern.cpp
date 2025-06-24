#include<iostream>
using namespace std;

/*

       1
     1 2 1
   1 2 3 2 1
 1 2 3 4 3 2 1 

*/

int main() {
    int n = 3;
    for (int i = 0; i <= n; i++)
    {
        int num = 1;
        for (int j = 0; j < n - i; j++)
        {
           cout << "  ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << num << " ";
            num ++;
        }
        for (int j = i; j > 0; j--)
        {
            cout << j << " ";
            
        }
        cout << endl;
        
    }
    
    return 0;
}