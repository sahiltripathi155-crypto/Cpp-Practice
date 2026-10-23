//Given two matrices A and B print A-B

#include <iostream>
using namespace std;

int main(){


int arr1[4][3]={1,2,5,2,5,2,3,5,2,23,54,64};
int arr2[4][3]={23,54,2,5,2,6,36,2,52,75,32,45};
int ans[4][3];


//difference of two matrix

for(int row=0;row<4;row++){
    for(int col=0;col<3;col++){
         ans[row][col]=arr1[row][col]-arr2[row][col];
    }
}

//print the matrix
   for(int row=0;row<4;row++){
      for(int col=0;col<3;col++){
        cout<<ans[row][col]<<" ";
      }
      cout<<endl;
   }

   return 0;

}