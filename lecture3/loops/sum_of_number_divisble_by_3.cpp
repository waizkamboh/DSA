#include<iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a number";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
       if(i % 3 == 0){
        sum = sum + i;
       }
    }
    cout << "Sum of number divisble by 3:" << sum;
    return 0;
    
}

