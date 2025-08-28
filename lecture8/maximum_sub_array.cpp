#include <iostream>
using namespace std;

void maxSubArray(int arr[], int size) {
    for (int st = 0; st < size; st++)
    {
        for (int end = st; end < size; end++)
        {
           for (int i = st; i <= end; i++)
           {
              cout << arr[i];
           }
           cout << " ";
        }
        cout << endl;
    }
    
                   

}


int main() {
   int arr[] = {1, 2, 3, 4, 5};
   int size = 5;
   maxSubArray(arr, size); 
   return 0;
}