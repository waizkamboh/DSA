#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1, 3, 5, 7, 9};
    int n = 5;
    for (int i = n; i > 0; i--)
    {
        arr[i] = arr[i -1];
    }

    arr[0] = 6;
    n++;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return 0;
    
    
}