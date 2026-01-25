#include<iostream>
using namespace std;

int main(){

    int size;
    cout<<"Enter the size of array: ";      
    cin>>size;

    int arr[100];
    for(int i = 0;i<size;i++){
        cout<<"Enter element "<<i<<": ";
        cin>>arr[i];
    }
    cout<<"Reversed array is: ";
    for(int i = 0;i<size;i++){
        cout<<arr[size-1-i]<<" ";
    }
}