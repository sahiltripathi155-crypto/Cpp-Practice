#include <iostream>
using namespace std;

int cube(int n){
    int num;
    num=n*n*n;
    return num;
}


int main(){
    int a;
    cout<<"Enter the number:";
    cin>>a;
    cout<<cube(a);
}