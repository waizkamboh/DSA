#include<iostream>
using namespace std;

int main() {
    int size = 6;
    int num[size] = {5, 15, 22, 1, -15, 24};
    //We assume max number is maximum number
    int max = num[0];
    for (int i = 0; i < size; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
        
    }

    cout << "largest Value of an array is:" << max << endl;

    
}