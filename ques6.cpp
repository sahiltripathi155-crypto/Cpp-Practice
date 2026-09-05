#include <iostream>   //binary to decimal
using namespace std;
int main(){
    int num;
    int rem,i,mul=1,ans=0;
    cout<<"Enter the number:";
    cin>>num;
    while(num>0){
        rem=num%2;  //remainder  //also we can use bitwise AND operator rem=num&1
        num=num/2;  //quotient   //we can use bitwise right shift operator num=num>>1;
        ans=rem*mul+ans;   //ans
        mul=mul*10;        //mul
    }
    cout<<"Binary number:"<<ans;

}