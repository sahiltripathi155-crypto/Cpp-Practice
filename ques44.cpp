#include <iostream>
using namespace std;

int main(){

    string s= "rohit";
    //reverse a string
    int start =0, end=s.size()-1;
    while(start<end){
        swap(s[start], s[end]);
        start++, end--;
    }
     cout<<s<<endl;

     //to calculate its length or we can say its size
     int size =0;
     while(s[size]!= '\0'){
        size++;
    }
     cout<<size<<" ";

     cout<<endl;

    //to check the string is palindrome or not
    string s2= "naman";
    start=0, end =s2.size()-1;

    while(start<end){
        if(s2[start]!=s2[end]){
            cout<<"Not a palindrome:";
            return 0;
        }
        start++, end--;
    }

    cout<<"It is a palindrome:";


}