//Print inverted triangle with number
//4 4 4 4
//  3 3 3 
//    2 2 
//      1

#include <iostream>
using namespace std;

int main(){
    int n = 3;
    for(int i = 0; i <= 3; i++){
        for(int j = 0; j < i; j++){
            cout<<" ";
        }
        for(int j = 0; j < n-i; j++){
            cout<<j+1;
        }
        cout<<endl;

    }
}
