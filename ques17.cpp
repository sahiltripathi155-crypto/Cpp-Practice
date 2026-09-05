#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[5]={22,54,73,20,11};
    int ans=INT_MAX;
    //min value
    for(int i=0;i<5;i++){
        if( arr[i]<ans)
        ans=arr[i];

    }
    cout<<ans;
    return 0;
}