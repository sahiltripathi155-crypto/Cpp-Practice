//INTRODUCTION TO STRINGS IN C++

#include <iostream>
using namespace std;

int main(){
  

    //Direct we initialize it
    //char arr[]= {'a','p','p','l','e'};
    //for(int i=0;i<5;i++){
    //    cout<<arr[i];
    //}

   //char arr[]={'a','p','p','l','e'};
   //cout<<arr;

   //if we want variable size
   //char arr[20];
   //cin>>arr;
   //arr[2]='\0';  //because of the null char it only prints the value before this index
   //cout<<arr;

   //string s= "Rohit";
   //cout<<s;

   //if we want to ask from the user itself
   //string s;
   //cin>>s;  //Cin  only prints the first word of the sentence and after it does not print the other words
   //as if we use the tab, enter , space then it does not print that partrohi
   //cout<<s;

//to print the whole part of the sentence including the gaps then we use the "getline"
//string s;
//getline(cin, s);
//cout<<s<<endl;

//if we have to print its size as well
//cout<<s.size();

//use of append operation
//string s1="rohit", s2="mohit";
//string s3=s1 + s2;        //method first
//string s3= s1.append(s2);   //method second
//cout<<s3;

//to add an element in the last of the word
string s1="rohit", s2="mohit";
//s1.push_back('p');
//cout<<s1<<endl;
//s2.pop_back();
//cout<<s2;

//we can add a single element as a string in other ways
s1 = s1+"p";
cout<<s1<<endl;

//we can add a single element as a character 
s2 = s2 + 'n';   //but do not write more than a single element inside a single quotation like 'op' 
//it treat 'op' as a string not a character
cout<<s2<<endl;

//use of append operation(\) in string
//string s= "rohit negi is a \"good\" boy";
//cout<<s;


//to print the null character
string s="\\0";
cout<<s;


//if you want to print the "\0" then it does not print
//Here, \0 is the null character, whose ASCII value is 0.
//The important point is that "\0" is a C-style string literal containing:
//- One null character (\0)
//- One additional terminating null character automatically added by C++
//However, when you initialize a std::string from a C-style string using string s = "\0";, the constructor treats the literal as a null-terminated string.
// Since its first character is already \0, the resulting string is empty.
}