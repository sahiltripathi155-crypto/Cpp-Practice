#include <iostream>
#include <cmath>
using namespace std;

int countdigit(int n)
{
    if(n==0){
        return 1;
    }
    int count=0;
    while(n){
        count++;
        n=n/10;
    }
    return count;
}

bool Armstrong(int num, int digit)        //boolean because we want answer in yes(1) and No(0)
{
    int n=num,ans=0,rem;
    while(n){
        rem=n%10;
        n/=10;
        ans= ans+ pow(rem,digit);
    }
    if(ans==num){
        return 1;
    }
    else{
        return 0;
    }
}

    int main(){
        int num;
        cin>>num;

        int digit=countdigit(num);      //count digit
        cout<<Armstrong(num,digit)<<endl;     //armstrong number

        return 0;
    }
    
