#include <iostream>
using namespace std;

int swapMinAndMax(int arr[], int size) {
    int minIndex = 0, maxIndex = 0;
    for (int  i = 0; i < size; i++)
    {
        if (arr[i] < minIndex)
        {
           minIndex = i; 
        }
        if (arr[i] > maxIndex)
        {
            maxIndex = i;

        }
        
    }
    
    swap(arr[minIndex], arr[maxIndex]);
    cout << "min" << minIndex << endl;
    cout << "max" << maxIndex << endl;
}



int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 6;
    swapMinAndMax(arr, size);
    for (int i = 0; i < size; i++)
    {
       cout << arr[i];
    }
    
    return 0;
}