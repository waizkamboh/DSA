#include <iostream>
using namespace std;

int diagnolSum(int matrix[][3], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum += matrix[i][j];
            }else if (i == n-i-1)
            {
               sum += matrix[i][j];
            }
            
            
        }
        
    }
    return sum;
    
}

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = 3;
    cout << diagnolSum(matrix, n);  
    return 0;
}