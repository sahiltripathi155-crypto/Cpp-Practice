#include<iostream>
using namespace std;
int main(){
    char alpha;
    cout<<"enter the aplhabet:";
    cin>>alpha;
    switch(alpha){
        case'a':
        cout<<"monday"<<" ";
        case'b':
        cout<<"tuesday"<<" ";
        case'c':
        cout<<"wednesday"<<" ";
        break;
        case'd':
        cout<<"thursday"<<" ";
        case'e':
        cout<<"friday"<<" ";
        case'f':
        cout<<"saturday"<<" ";
        case'g':
        cout<<"sunday"<<" ";
    }
}