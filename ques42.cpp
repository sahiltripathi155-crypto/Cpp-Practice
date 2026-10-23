//Binary Search in a 2D array which is sorted in decreasing order. N is the number of rows and M is the number of columns.
/*20 19 18 17
  16 15 14 13 
  12 11 10 9 
  8  7  6  5 */

#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target){

   int N=matrix.size(), M=matrix[0].size();
   int start=0, end=N*M-1;
   int row_major, col_major;
   while(start<=end){
    int mid=start + (end-start)/2;
     row_major=mid/M;
     col_major=mid%M;
    if(matrix[row_major][col_major]==target){
        return 1;
     }
    else if(matrix[row_major][col_major]<target){
        end=mid-1;     //to get the value bigger in the decreasing order matrix we move to the left side of the array matrix 
    }
    else{
        start= mid+1;  //to get the value smaller in the decreasing order matrix we move to the right side of the array matrix 
    }
   }
   return 0;

}

int main(){
    int N=4, M=4;

    vector<vector<int>> matrix ={
        {20 ,19, 18, 17},
        {16, 15, 14, 13},
        {12 ,11, 10, 9 },
        {8, 7,  6 , 5 }
    };

    int target;
   cout<<"Enter the value of the target:";
   cin>>target;

   if(searchMatrix(matrix, target)){
    cout<<"Target found:";
   }
   else{
    cout<<"Target not found:";
   }

   return 0;
}