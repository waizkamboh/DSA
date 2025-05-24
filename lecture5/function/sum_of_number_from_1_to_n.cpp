#include<iostream>
using namespace std;

int calculateSum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    
    return sum;

}

int main() {
    
    cout << "Sum of numbers from 1 to N = " << calculateSum(10);
    return 0;
}