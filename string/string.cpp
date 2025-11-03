#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "Hello World"; // Dynamic => Runtime Resize
    string str2 = "How are you";
    cout << str1 << endl;
    str1 = "Hello";
    cout << str1 << endl;

    string str3 = str1 + str2;
    cout << str3 << endl;

}