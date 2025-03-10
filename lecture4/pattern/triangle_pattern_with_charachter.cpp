//Print triangle pattern with charachter
//A
//B B
//C C C
//D D D D

#include <iostream>
using namespace std;

int main(){
    int n = 3;       
     char ch = 'A';
      for(int i = 0; i <= n; i++){
        for(int j = 0; j <= i; j++){
           cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
    }
}