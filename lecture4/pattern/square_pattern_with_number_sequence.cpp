//Print Square pattern with number sequence
//1 2 3
//4 5 6
//7 8 9
#include <iostream>
using namespace std;

int main(){
    int n = 2, x = 1;
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n; j++){
            cout<<x<<" ";
            x++;
        }
        cout<<endl;
    }
}