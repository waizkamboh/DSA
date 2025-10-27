#include <iostream>
using namespace std;

// Add array element at the beginning
// int main() {
//     int arr[10] = {1, 3, 5, 7, 9};
//     int n = 5;
//     for (int i = n; i > 0; i--)
//     {
//         arr[i] = arr[i -1];
//     }

//     arr[0] = 6;
//     n++;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i];
//     }
//     return 0;
    
    
// }

// Add array element at the specific position

int main() {
    int arr[10] = {1, 3, 5, 7, 9},  n = 5, pos = 1;

    for (int i = n; i > pos; i--)
    {
        arr[i] = arr[i -1];
    }

    arr[1] = 6;
    n++;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return 0;
    
    
}