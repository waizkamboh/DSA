#include <iostream>
using namespace std;

int productOfArray(int arr[], int size) {
    int product = 1;
    for (int i = 0; i < size; i++)
    {
       product = product * arr[i];
    }
           
    return product;



}


int main() {
    int arr[] = {1, 2, 3, 4, 6, 6};
    int size = 6;
    cout << "Product of an array is:" << productOfArray(arr, size);
    return 0;
}