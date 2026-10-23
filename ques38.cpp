//PRINT THE VALUES OF THE MATRIX IN THE WAVEFORM
#include <iostream>
#include<vector>
using namespace std;

int main(){

    int row,col;
    //take the values from the user
    
    cout<<"Enter the number of the rows and col:";
    cin>> row >>col;

    vector<vector<int>> matrix(row, vector<int>(col));
    //enter the matrix elements
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
         cin>>matrix[i][j];
        }
    }

    for(int j=0;j<col;j++){
        if(j%2==0){          //when the columns is odd we have to run the loop from up to down
            for(int i=0;i<row;i++){
             cout<<matrix[i][j]<<" ";
            }
        }
        else{
            for(int i=row-1;i>=0;i--){    //otherwise when the columns is even we have to run the loop from down to up
                cout<<matrix[i][j]<<" ";
            }
        }
    }


}
