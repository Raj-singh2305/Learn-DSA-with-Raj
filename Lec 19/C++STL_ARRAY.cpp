#include<iostream>
#include<array>
using namespace std;

int main(){
    int basic[3]={1,2,3}; // C-style array
    array<int,3> a={1,2,3}; // STL array

    int size = a.size(); // size of the array

    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<<"Element at 2nd index: "<<a.at(2)<<endl; // access element at index 2

    cout<<"empty or not: "<<a.empty()<<endl; // check if the array is empty

    cout<<"First element: "<<a.front()<<endl; // first element of the array

    cout<<"Last element: "<<a.back()<<endl; // last element of the array
}