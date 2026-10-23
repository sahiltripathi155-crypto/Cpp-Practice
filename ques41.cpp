//ROTATE MATRIX BY K TIMES

#include <iostream>
#include <vector>
using namespace std;

void RotateNinetydegree(vector<vector<int>>&matrix){

    //rotate it by 90 degree
    //transpose
    int n=matrix.size();
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    //reverse its each row
    for(int i=0;i<n;i++){
        int start=0,end=n-1;
        while(start<end){
            swap(matrix[i][start],matrix[i][end]);
            start++,end--;
        }
    }
}

int main(){

  //first take the matrix size
    int n;
    cout<<"Enter the size of the matrix:";
    cin>>n;

    //Create the matrix
    vector<vector<int>> matrix(n, vector<int>(n));

    cout << "Enter the matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }


    int k;
    cout<<"Enter how many times we have to rotate the matrix:";
    cin>>k;
    k=k%4;
    while(k){
        RotateNinetydegree(matrix);
        k--;
    }

    cout << "Rotated matrix:\n";
    for (const auto& row : matrix) {
        for (int value : row) {
            cout << value << " ";
        }
        cout << "\n";
    }
}