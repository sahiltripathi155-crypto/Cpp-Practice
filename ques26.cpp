//VECTOR IN C++ AND ALL ABOUT USE OF STL(STANDARD TAMPLATE LIBRARY)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    //create vector,declare
   // vector<int>v;
    //vector<int>v1(5,1);     //initialisation of a vector with having size 5 and all values are 1
    //size and capacity
   // cout<<"Size of v: "<<v.size()<<endl;
   // cout<<"Capacity of v: "<<v.capacity()<<endl;
   // v.push_back(2);
   // v.push_back(3);
   // v.push_back(10);
    //cout<<"Size of v: "<<v.size()<<endl;
    //cout<<"Capacity of v: "<<v.capacity()<<endl;
    //update value
   // v[1]=5;
   // cout<<"Size of v1: "<<v1.size()<<endl;
   // cout<<"Capacity of v1: "<<v1.capacity()<<endl;
   // v1.push_back(8);
   // cout<<"Size of v1: "<<v1.size()<<endl;
   // cout<<"Capacity of v1: "<<v1.capacity()<<endl;

   // vector<int>v3={1,2,3,4,5};
    //cout<<"Size of v3: "<<v3.size()<<endl;
   // cout<<"Capacity of v3: "<<v3.capacity()<<endl;

    //delete value from vector
    //vector<int>vnew;
    //vnew.push_back(4);
    //vnew.push_back(41);
    //vnew.push_back(14);
    //vnew.push_back(84);
    //vnew.push_back(42);
    //vnew.pop_back();
    //cout<<"Size of vnew: "<<vnew.size()<<endl;
    //cout<<"Capacity of vnew: "<<vnew.capacity()<<endl;
    

    //to erase particular element wrt to its index
    //vnew.erase(vnew.begin()+1);
    //cout<<"Size of vnew: "<<vnew.size()<<endl;
    //cout<<"Capacity of vnew: "<<vnew.capacity()<<endl;
    //to print left values
    //for(int i=0;i<vnew.size();i++){
      //  cout<<vnew[i]<<" ";
    //}

    //to insert value at the particular index

    //vnew.insert(vnew.begin()+1,50);   //1 shows the index and after that we write the value to be inserted that is 50 here
    //cout<<endl;
    //for(int i=0;i<vnew.size();i++){
      //  cout<<vnew[i]<<" ";
    //}

    //to update value from 14 to any value number
    //vnew[2]=37;   //in bracket we write the index of the value which we have to change 
    //cout<<endl;
    //for(int i=0;i<vnew.size();i++){
    //    cout<<vnew[i]<<" ";
    //}
    //vnew.clear();   //remove all the elements but capacity toh utni hi rahegi memory ki
    //cout<<endl;
    //cout<<"Size of vnew: "<<vnew.size()<<endl;
    //cout<<"Capacity of vnew: "<<vnew.capacity()<<endl;

    //vector<int>arr;
    //arr.push_back(2);
    //arr.push_back(12);
    //arr.push_back(21);
    //arr.push_back(122);
    //to print the first element
    //cout<<arr[0]<<endl;
    //cout<<arr.front()<<endl;
    //to print the last element
    //cout<<arr[arr.size()-1]<<endl;   
    //cout<<arr.back()<<endl;

    //vector<int>a;
    //copy value of one vector to another
     //a=arr;
     //cout<<a.size();
     ///cout<<endl;
     //to print its elements also
     //for(auto it=arr.begin();it!=arr.end();it++){
       // cout<<*it<<" ";
   //  }

    //cout<<endl;
     //other method to print also
    //for(auto i:arr)
    //cout<<i<<" ";

    vector<int>ans;
    ans.push_back(5);
    ans.push_back(235);
    ans.push_back(15);
    ans.push_back(54);
    ans.push_back(125);

    //sort in increasing order
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";  
    }
    cout<<endl;

    //sort in decreasing order 
    //sort(ans.begin(),ans.end(),greater<int>());
    //for(int i=0;i<ans.size();i++){
    //    cout<<ans[i]<<" ";
    //}
    //cout<<endl;
    //another method to sort in decreasing order by using "r" which means reverse
    //sort(ans.rbegin(),ans.rend());
    //for(int i=0;i<ans.size();i++){
    //    cout<<ans[i]<<" ";
    //}

    //to search element by  binary search
    //cout<<binary_search(ans.begin(),ans.end(),54)<<endl;  //write element which you have to search
    //1 in  output means yes and 0 means no
    //cout<<binary_search(ans.begin(),ans.end(),55)<<endl;


    //to find the index of the element which is pointed by the iterator
    // we just simply subtract its index from the index of first element 

    //cout<<find(ans.begin(),ans.end(),54)-ans.begin()<<endl;
    

    //sort
    //sort(v.begin(),v.end());
    //sort (v.begin(),v.end(),greater<int>());

    //search
    //bool found = binary_search(v.begin(),v.end(),5);
    //auto it=find(v.begin,v.end(),6);  //first occurance 

    //count
    //int count=count(v.begin(),v.end(),5);
    //Max or Min
    //int maximum= max_element(v.begin(),v.end()); 

    
}    