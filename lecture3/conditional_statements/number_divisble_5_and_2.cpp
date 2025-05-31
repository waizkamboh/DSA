#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number";
    cin >> n;
    if(n % 5 == 0 && n % 2 == 0 ){
        cout << "Number is divisble by 5 and 2";
    }
}