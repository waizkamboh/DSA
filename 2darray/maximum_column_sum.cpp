#include <iostream>
using namespace std;

int getMaxSum(int matrix[][3], int row, int col) {
    int maxColumnSum = INT_MIN;
    for (int i = 0; i < col; i++)
    {
       int sum = 0;
       for (int j = 0; j < row; j++)
       {
          sum += matrix[j][i];
       }
       
       maxColumnSum = max(maxColumnSum, sum);
       
    }

    return maxColumnSum;
    
}

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3;
    int col = 3;
    cout << "Maximum Column Sum is: " << getMaxSum(matrix, rows, col);
    return 0;
}