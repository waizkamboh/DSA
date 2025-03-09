//Print square pattern with charachter sequence
//A B C 
//D E F
//G H I

#include <iostream>
using namespace std;

int main(){
    int n = 2;
    char ch = 'A';
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}