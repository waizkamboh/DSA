#include<iostream>
using namespace std;

int sumDigits(int n) {
    int sumDigit = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        n = n / 10;
        sumDigit = sumDigit + lastDigit;
    }
    
    return sumDigit;
    
}

int main() {
    int n;
    cout << "Enter a number";
    cin >> n;
    cout << "Sum of digit" << n << " = " << sumDigits(n);
    return 0;
}