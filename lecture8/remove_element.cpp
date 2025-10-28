#include <iostream>
using namespace std;

// Remove first element from array
// int main() {
//     int arr[] = {1, 6, 3, 5, 3, 7};
//     int n = 6;
//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = arr[i + 1];
//     }
//     n--;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i];
//     }
    
//     return 0;
// }

 // Remove specfic element from array
// int main() {
    
//     int arr[] = {1, 6, 3, 5, 3, 7};
//     int n = 6, pos = 1;
//     for (int i = pos; i < n; i++)
//     {
//         arr[i] = arr[i + 1];
//     }
//     n--;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i];
//     }
    
//     return 0;

// }

// Remove last element from array
int main() {
    
    int arr[] = {1, 6, 3, 5, 3, 7};
    int n = 6;
    n--;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    

}