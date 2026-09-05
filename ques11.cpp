//reverse a number n using function , Constraints: -5000<=n<=5000
#include <iostream>
using namespace std;

int rev(int n){
    int rem,ans=0;
    while(n!=0){
    rem=n%10;
    n=n/10;
    ans=ans*10+rem;
    }
    return ans;

}


int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;

    if(n>=-5000 && n<=5000){
        cout<< "Reversed number ="<< rev(n);
    }
    else{
        cout<<"Number is out of range!";
    }
    return 0;
    
}