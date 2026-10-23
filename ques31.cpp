//4SUM SOLVING BY USING 3SUM METHOD
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool has4sum(vector<int>&arr, int target){

    sort(arr.begin(),arr.end());

    int n=arr.size();
    
    for(int k=0;k<n-3;k++){
    for(int i=k+1;i<n-2;i++){
        int ans=target-arr[k]-arr[i];
        int start=i+1, end=n-1;
        while(start<end){
            if(arr[start]+arr[end]==ans){
                return 1;
            }
            else if (arr[start]+arr[end]<ans){
                start++;
            }
            else{
                end--;
            }
         }
       }

    }
    return 0;
};


int main(){
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
     vector<int>arr(n);

     cout<<"Enter the array elements:";
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     int target;
     cout<<"Enter the target:";
     cin>>target;

     if(has4sum(arr,target)){
        cout<<"4sum exist:";
     }
     else{
        cout<<"4sum does not exist:";
     }
     return 0;
}

