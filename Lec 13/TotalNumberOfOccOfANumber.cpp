#include<iostream>
using namespace std;

int firstOcc(int arr[],int size,int key){
    int left = 0;
    int right = size-1;
    int ans = -1;

    while(left<=right){
        int mid = left + (right-left)/2;
        if(arr[mid]==key){
            ans = mid;
            right = mid -1;

        }
        else if(arr[mid]<key){
            left =  mid + 1;
        }
        else{
            right = mid -1;
        }
    }
    return ans ;
}
int lastOcc(int arr[],int size,int key){
    int left = 0;
    int right = size-1;
    int ans = -1;
    
    while(left<=right){
        int mid = left + (right-left)/2;
        if(arr[mid]==key){
            ans = mid;
            left = mid + 1;
            
        }
        else if(arr[mid]<key){
            left =  mid + 1;
        }
        else{
            right = mid -1;
        }
    }
    return ans ;
}


int inputArr(int arr[],int size){
    for(int i =0;i<size;i++){
      cout<<"Enter a element at index "<<i<<" ";
      cin>>arr[i];
      cout<<endl;
    }
}
int outputArr(int arr[],int size){
    for(int i =0;i<size;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[100];
    inputArr(arr,8) ;

    outputArr(arr,8);

    int firstIndex = firstOcc(arr,8,3);
    int lastIndex = lastOcc(arr,8,3);

    int total_number_Keys = lastIndex-firstIndex+1;
    cout<<"Total number occurence of key in an array "<<total_number_Keys<<endl;


}