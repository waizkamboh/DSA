#include<iostream>
using namespace std;

void calculatePrimeNo(int n){
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if(n % i == 0){
            count++;
        }
    }
    if(count == 2){
        cout << n << "Is not prime";
    }else{
        cout << n << "Is prime";
    }
    
}

int main() {
   calculatePrimeNo(6);
   return 0;
}