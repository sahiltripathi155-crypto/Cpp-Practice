#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[6]={33,54,67,44,67,89};
    int INT_MIN;
    int ans=INT_MIN;
    //max value
    for(int i=0;i<6;i++){
        if(arr[i]>ans)
            ans=arr[i];
    }
    cout<<ans<<endl;
    return 0;
}