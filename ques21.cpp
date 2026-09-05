//Selection sorting
#include <iostream> 
using namespace std;

int main(){
    int arr[1000];
    int i,j,n,index=0;  
    cout<<"Enter the size of array";
    cin>>n;   //size of array
    cout<<"Enter the elements of array";
    for(i=0;i<n;i++){
    cin>>arr[i];
    }
       //Input loop
    for(i=n-1;i>0;i--){
      int index=i;
      for(j=0;j<i;j++){
        if(arr[j]>arr[index]){
            index=j;
        }
    }
    swap(arr[i],arr[index]);
    }
    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
}