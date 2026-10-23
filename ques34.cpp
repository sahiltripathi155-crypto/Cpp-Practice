//Print sum of each column in 2D array

#include <iostream>
using namespace std;

//matrix
// 2 3 4 5
// 1 2 6 8
// 4 9 3 2
int main(){

    int row=3;
    int col=4;
    int arr[row][col];

    //taking elements from the user

    cout<<"Enter the elements of the matrix:";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    //sum of each column
    cout<<"sum of each column:"<<endl;
    for(int j=0;j<col;j++){
    int sum=0;
    for(int i=0;i<row;i++){
       sum+=arr[i][j];
      }
      
      cout << "Column " << j + 1 << " = " << sum << endl;
   }
   return 0;
}