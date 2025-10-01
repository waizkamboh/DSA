#include <iostream>
using namespace std;

int reverseNumber(int n) {
    int reverseNum = 0;
    while (n > 0)
    {
       int lastDigit = n % 10;
       n = n / 10;
       reverseNum = reverseNum * 10 + lastDigit;
     


    }
    return reverseNum;
  
}
 
int main() {
    int n;
    cout << "Enter a number";
    cin >> n;
    cout << "Number before reverse is" << n << endl;
    cout << "Number After reverse is";
    cout << reverseNumber(n);

    return 0;
}