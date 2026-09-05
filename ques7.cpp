#include <iostream>
using namespace std;

int sum(int a,int b){
    int ans = a + b;
    return ans;
}

int main(){
    int m,n,o,p;
    cout<<"Enter four numbers:";
    cin>>m>>n>>o>>p;
    cout<<sum(m,n)<<endl;
    cout<<sum(o,p);
}