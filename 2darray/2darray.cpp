#include <iostream>
using namespace std;

int main() {
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int rows = 4;
    int col = 3;
    int table[4][3];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> table[i][j];
        }
        
    }
    
    return 0;
}