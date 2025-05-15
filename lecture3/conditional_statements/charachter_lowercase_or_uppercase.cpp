#include<iostream>
using namespace std;

int main() {
    char ch;
    cout<<"Enter a charachter";
    cin>>ch;
    if(ch >= 'A' && ch <= 'Z'){
        cout<<"Uppercase";
    }else{
        cout<<"Lowercase";
    }
    return 0;

}