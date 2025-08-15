#include<iostream>
using namespace std;

int main() {
    int size = 6;
    int num[size] = {5, 15, 22, 1, -15, 24};
   //We assume first index is minmum
    int min = num[0];

    for (int i = 0; i < size; i++)
    {
        if(num[i] < min){
            min = num[i];
        }
    }

    cout << "Smallest Value of an array is:" << min;
    
}