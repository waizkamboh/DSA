#include<iostream>
using namespace std;

int main(){
    int n, sum = 0;
    cout << "Enter a number";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
                sum = sum + i;

        if(i == 5){
            break;
        }

        
    }
    cout << "Sum of number is:" << sum;
    
}