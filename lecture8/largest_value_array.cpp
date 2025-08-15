#include<iostream>
using namespace std;

int main() {
    int size = 6;
    int num[size] = {5, 15, 22, 1, -15, 24};
    //We assume max number is maximum number
    int largest = num[0];
    for (int i = 0; i < size; i++)
    {
        // if (num[i] > largest)
        // {
        //     largest = num[i];
        // }
        // if we not write if statement we can write max function and find max value using max function
        
        largest = max(num[i], largest);
    }

    cout << "largest Value of an array is:" << largest << endl;

    
}