#include<iostream>
using namespace std;

int main(){
    int size = 6;
    int num[size] = {5, 15, 22, 1, -15, 24};
    int smallest = num[0];
    int index = 0;
    for (int i = 0; i < size; i++)
    {
       if(num[i] < smallest){
        smallest = num[i];
        index = i;
       }
    }

    cout << "Index of an array which can hold Smallest Value:" << index << endl;


}