#include<iostream>
using namespace std;

void isPrime(int n) {
    if (n <= 1) {
        cout << n << " is not a prime number.";
        return;
    }

    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if(n % i == 0) {
            count++;
        }
    }
    if(count == 0) {
        cout << n <<" Number is prime";
    }else{
        cout << n <<" Number is not prime";
    }
    
}

int main() {
    int n;
    cout << "Enter a number";
    cin >> n;
    isPrime(n);
    return 0;
}