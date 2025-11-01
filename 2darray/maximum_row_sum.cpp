#include <iostream>
using namespace std;

int getMaxSum(int matrix[][3], int row, int col) {
    int maxRowSum = INT_MIN;
    for (int i = 0; i < row; i++)
    {
       int sum = 0;
       for (int j = 0; j < col; j++)
       {
          sum += matrix[i][j];
       }
       
       maxRowSum = max(maxRowSum, sum);
       
    }

    return maxRowSum;
    
}

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3;
    int col = 3;
    cout << "Maximum Row Sum is: " << getMaxSum(matrix, rows, col);
    return 0;
}