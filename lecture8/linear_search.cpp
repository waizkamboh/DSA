#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int traget) {
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == traget)
        {
            return i;
        }
        
    }

    return -1;

}

int main() {
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = 7;
    int target = 80;
    cout << linearSearch(arr, size, target);
}