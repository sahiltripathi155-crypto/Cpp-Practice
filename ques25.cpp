//BINARY SEARCH
#include <iostream>
using namespace std;


int BinarySearch(int arr[],int n, int key){
int start=0;
int end=n-1;
int mid;
while(start<=end){
    int mid=(start + end)/2;          //mid ko find karenge
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]<key){
        start = mid + 1;
    }
    else
        end=mid - 1;
    }
    return -1;
    
}


int main(){
    int n;
    int arr[1000];
    cout<<"enter the number of the elements in array:";
    cin>>n;
    cout<<"enter the element:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key:";
    cin>>key;
    cout<<BinarySearch(arr,n,key)<<endl;
    return 0;

}