#include <iostream>
using namespace std;

int maxSub(int arr[], int size) {
    int cs = 0, maxi = INT_MIN;
    for (int i = 0; i < size; i++)
    {
       cs += arr[i];
       maxi = max(cs, maxi);
       if(cs < 0)
         cs = 0;
    }
    return maxi;
}

int main() {
    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int size = 7;
    cout << maxSub(arr, size);
    return 0;
}