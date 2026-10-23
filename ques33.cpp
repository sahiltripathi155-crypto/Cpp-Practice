//REVERSE EACH ROW OF MATRIX
#include <iostream>
using namespace std;


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

    //Reverse each row of the matrix
    for(int i=0;i<row;i++){
        int start=0,end=col-1;
       while(start<end){
        swap(arr[i][start],arr[i][end]);
        start++,end--;
       }
    }

  //print matrix
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }

  return 0;
}