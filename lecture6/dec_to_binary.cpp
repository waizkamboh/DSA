#include<iostream>
using namespace std;

int decToBinary(int dec){
    int ans = 0;
    int pow = 1; //10^0
    while (dec > 0)
    {
        int rem = dec % 2;
        dec = dec / 2;
        ans += rem * pow;
        pow *= 10; 
    }
    return ans;
}

int main() {
    int decimalNumer;
    cout << "Enter Decimal Number";
    cin >> decimalNumer;
    cout << decToBinary(decimalNumer) << endl;
    return 0;
}