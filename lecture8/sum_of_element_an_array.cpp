#include <iostream>
using namespace std;

int sumOfArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
    
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 6;
    cout << "Sum of an array is:" << sumOfArray(arr, size);
    return 0;
}