#include<iostream>
using namespace std;

void printPrimeNumber(int n) {
    for (int i = 2; i <= n; i++) {
        int count = 0;
        for (int j = 2; j < i; j++) {  // check up to i-1
            if (i % j == 0) {
                count++;
                break; // No need to continue if one divisor found
            }
        }
        if (count == 0) {
            cout << i << " is a prime number." << endl;
        }
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    printPrimeNumber(n);
    return 0;
}
