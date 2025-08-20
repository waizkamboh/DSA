#include <iostream>
using namespace std;

// Reverse array using 2 pointer approch
void reverseArray(int arr[], int size) {
    int start = 0, end = size - 1;
    while (start < end) {
      swap(arr[start], arr[end]);
      start ++;
      end --;
    }
    
}



int main() {
    int arr[] = {4, 2, 7, 8, 1, 2};
    int size = 6;
    reverseArray(arr, size);
    for (int i = 0; i < size; i++)
    {
       cout << arr[i] <<" ";
    }
    

    return 0;

}

