#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 6, 3, 5, 3, 7};
    int n = 6;
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    
    return 0;
}