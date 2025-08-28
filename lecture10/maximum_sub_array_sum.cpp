#include <iostream>
using namespace std;

int maxSubArraySum(int arr[], int size) {
    int maxSum = INT_MIN;
    for (int st = 0; st < size; st++)
    {
        int currentSum = 0;
        for (int end = st; end < size; end++)
        {
            currentSum += arr[end];
            maxSum = max(currentSum, maxSum);
        }
        
    }
    return maxSum;
    
}

int main() {
    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int size = 7;
    cout << "Maximum sum of sub array:" <<  maxSubArraySum(arr, size);
    return 0;
}
