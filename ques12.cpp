#include <iostream>
using namespace std;

void num(int a, int b, int c){
    b=a;
    c=b;
    a=c;
    
    cout<< "a =" << a << endl;
    cout<< "b =" << b <<endl;
    cout<< "c =" << c <<endl;
}

int main(){
    int a,b,c;
    cout<<"Enter the number:";
    cin>> a >> b >> c;
    num(a, b, c);
    return 0;
}