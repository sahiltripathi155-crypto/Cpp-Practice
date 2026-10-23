
//to transpose a matrix using a new 2D vector this works for both square and rectangular matrices.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int row, col;

    // Take rows and columns from the user
    cout << "Enter the number of rows and columns: ";
    cin >> row >> col;

    // Create the original matrix
    vector<vector<int>> matrix(row, vector<int>(col));

    // Input matrix elements
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> matrix[i][j];
        }
    }

    // Create the transposed matrix
    vector<vector<int>> transposed(col, vector<int>(row));

    // Transpose the matrix
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }

    // Print the transposed matrix
    cout << "Transpose of the matrix:\n";
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            cout << transposed[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
