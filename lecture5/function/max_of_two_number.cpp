#include<iostream>
using namespace std;

int minOfTwo(int a, int b) {
  
    if(a > b){
        return a;
    }else{
        return b;
    }
}

int main() {
    
    cout << "Max of two: " << minOfTwo(15,20) << endl;
    return 0;
}