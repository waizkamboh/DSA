#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Madam";
    int st = 0, end = str.length()-1;
    
    while (st <= end)
    {
        if (str[st] == str[end])
        {
            st++;
            end--;
        }else{
            cout << "String is not palindrome";
        }
        
    }
    cout << "String is palindrome" << endl;
}