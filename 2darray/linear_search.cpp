#include <iostream>
using namespace std;
void linearSearch(int matrix[][3], int row, int col, int target) {
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] == target)
            {
                cout << "Found at: " << "Row "<< i << "and column " << j; 
            }
            
        }
        
    }
    
}

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3, col = 3, target = 3;
    linearSearch(matrix, rows, col, target);
}