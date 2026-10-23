//DIVIDE ARRAY IN TWO SUBARRAY WITH EQUAL SUM

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool divide(vector<int>arr){
    int prefix_sum=0, total_sum=0,n=arr.size();

    //total sum
    for(int i=0;i<n;i++){
        total_sum+=arr[i];
    }
    //sum of the left part
    for(int i=0;i<n;i++){
        prefix_sum+=arr[i];          
        int ans=total_sum - prefix_sum;      //you can also put the whole part of ans in the 'if' bracket

        //it give us remaining right part sum
        if(ans==prefix_sum){                //then it can be written as if(total_sum==2*prefix_sum)
            return 1;
        }
    }
    return 0;
}


int main(){
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];

    }
    //function calling 
    cout<<divide(v);
    
}