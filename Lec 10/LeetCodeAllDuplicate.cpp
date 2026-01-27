#include<iostream>
using namespace std;  

int printing(int arr_duplicate[], int size){
    for(int i=0;i<size;i++){
        cout<<arr_duplicate[i]<<" ";
    }
    return 0;
}

int main(){

    int size ;
    cout<<"Enter the size of array: ";
    cin>>size;  

    int arr[100];

    int k =0 ;

    int arr_duplicate[100];
    for(int i=0;i<size;i++){
        cout<<"Enter the element "<< i <<" of array: ";
        cin>>arr[i];    
    }
    cout<<"The duplicate elements in the array are: "<<endl;    
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
             arr_duplicate[k]=arr[i];
             k++;
            }
        }
    }

    cout<<"The duplicate elements are: "<<endl;
    printing(arr_duplicate,k);
}