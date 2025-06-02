#include<iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a charachter";
    cin >> ch;
    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        cout << "Charachter is vowel";
    }else {
        cout << "Charachter is consonant";
    }
}