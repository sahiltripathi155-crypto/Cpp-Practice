#include <iostream>
using namespace std;


//int sum(int a, int b, int c) //multiple parameter
bool Prime(int n){       //function declaration for prime number
    if(n<2){
        return 0;            
    }
    for(int i=2;i<n;i++){       //function define for prime number 
       if(n%i==0){
        return 0;
       }
    }
    return 1;
}
int Fact(int n=3){  //function declaration for factorial     //default parameter
    int ans=1;                  //function define for factorial of a number
    for(int i=1;i<=n;i++){        
    ans=ans*i;
    }
    return ans;
}


int main(){
    int a,b;
    cout<<"Enter the number:";
    cin>>a>>b;

    cout<<Fact();
    cout<<endl;
    cout<<Prime(a)<<endl;              //function calling
    cout<<Fact(a)<<endl;
    cout<<Prime(b)<<endl;
    cout<<Fact(b)<<endl;
    cout<<Prime(b-a)<<endl;
    cout<<Fact(b-a)<<endl;


}

