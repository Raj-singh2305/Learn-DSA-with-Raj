#include<iostream>
using namespace std;


int main(){


    int arr[]={4,1,5,9,10,2};
    int n=sizeof(arr)/sizeof(int);

    for (int i =1; i<n;i++){
        int j=1;
        while(j>0 && arr[j]<arr[j-1]){
            swap(arr [j],arr[j-1]);
            j--;

        }
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}