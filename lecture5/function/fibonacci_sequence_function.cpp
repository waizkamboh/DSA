#include<iostream>
using namespace std;
 
void fabonacci(int n) {
    int n1 = 0, n2 = 1, nextTerm = 0;
    for(int i = 0; i < n; i++){
        if(i == 0){
            cout << n1 << ",";
        }
        else if(i == 1){
            cout << n2 << ",";
        }
        else {
        nextTerm = n1 + n2;
        n1 = n2;
        n2 = nextTerm;
        cout << nextTerm <<",";
        
        }
        
    }
}

int main() {
    int n;
    cout << "Enter the number of sequence";
    cin >> n;
    fabonacci(n);
    return 0;

    
}