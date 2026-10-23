//VECTOR METHOD TO TURN MATRIX 180 DEGREE

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotateMatrix(vector<vector<int>>& matrix) {
    // Change 1: Reverse each row
    for (auto& row : matrix) {
        reverse(row.begin(), row.end());  //reverses the elements of the current row
    }

    // Change 2: Reverse the matrix only once
    reverse(matrix.begin(), matrix.end());   //reverses the order of the entire rows
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    rotateMatrix(matrix);

    for (auto& row : matrix) {
        for (int element : row) {
            cout << element << " ";
        }
        cout << endl;
    }

    return 0;
}


