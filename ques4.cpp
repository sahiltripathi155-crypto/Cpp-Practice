#include <iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter the number:";
    cin>>n;
    for(i=0;i<=n;i++){
        if(i==7){
            continue;
        }
        cout<<i<<endl;
    }
}