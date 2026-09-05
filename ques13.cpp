// addition and subtraction method
//swap 2 numbers a,b without using extra variables. range of -10000<=a,b<=100000

#include <iostream>
using namespace std;

void swap(int &a, int &b){
    a = a + b;
    b = a - b;
    a = a - b;
}

int main() {
    int a, b;

    cout<< "Enter the numbers:";
    cin >> a>> b;

    if(a< -10000 || a> 100000 || b < -10000 || b > 100000){
        cout<< "numbers are out of range!";
        return 0;   
    }

    swap(a,b);
    cout << "After swapping:"<<endl;
    cout<< "a =" << a <<endl;
    cout<< "b =" << b <<endl;

    return 0;
}