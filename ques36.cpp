/*3: Given a matrix of size n*n, Print sum of diagonal element.
 Ex:   1 2 3
          4 5 6
          7 8 9

Its answer: 1+5+9 , 3+5+7, So the total sum will be 1+5+9+3+5+7 = 30. Here we can see that 5 is included 2 times,
 so we should include it only 1 time so the final answer will be, 30-5 = 25.  So the final answer will be 25.*/

#include <iostream>
using namespace std;

int sumofdiagonal(int arr[][3], int row, int col){

    int first = 0;
    int second = 0;

    // Sum of first diagonal
    int i = 0;

    while(i < row){
        first += arr[i][i];
        i++;
    }

    // Sum of second diagonal
    i = 0;
    int j = col - 1;

    while(i < row){
        second += arr[i][j];
        i++;
        j--;
    }

    // Remove the middle element because it was counted twice
    int total = first + second - arr[row/2][col/2];

    return total;
}

int main(){

    int arr[3][3] = {
        1,2,3,
        4,5,6,
        7,8,9,
    };

    cout << "Diagonal sum = " << sumofdiagonal(arr,3,3);

    return 0;
}
