#include<iostream>
using namespace std;

int calculateFact(int n) {
    int fact = 1;
    for (int i = n; i >= 1; i--)
    {
        fact = fact * i;
    }
    return fact;
}

int main() {

    cout << "factorial of number is:" << calculateFact(4);
    return 0;
}