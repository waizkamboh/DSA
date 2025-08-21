#include <iostream>
using namespace std;

int intersectionOfArray(int arr1[], int arr2[], int size1, int size2) {
        for (int i = 0; i < size1; i++)
        {
           for (int j = 0; j < size2; j++)
           {
            if (arr1[i] == arr2[j])
            {
                cout << "Intersection of array is:" << arr1[i] << endl;
            }
            
           }
           
        }
        





}

int main() {
    int arr1[] = {1, 2, 3, 4, 5},  arr2[] = {6, 7, 3, 1};
    int size1 = 5, size2 = 4;
    intersectionOfArray(arr1, arr2, size1, size2);
    return 0;
}

