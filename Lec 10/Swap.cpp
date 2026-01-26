#include<iostream>
using namespace std;

void swap(int arr[],int size){
    for(int i=0; i<size ; i+=2){
       if(i+1<size){
        swap(arr[i],arr[i+1]);
       }
    //    arr[i]=arr[i]; 

    }
}

int printingArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}


int main(){

    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    int arr[100];

    for(int i=0; i<size; i++){      
        cout<<"Enter the element "<< i <<" of array: ";
        cin>>arr[i];
    }   

    swap(arr,size);
    printingArray(arr,size);


}