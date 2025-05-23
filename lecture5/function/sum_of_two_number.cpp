#include<iostream>
using namespace std;

int sum(int a, int b) {
   int s = a + b;
   return s;
}

int main() {
    
    cout << "Sum of two numbers: " << sum(10, 5) << endl;
    return 0;
}