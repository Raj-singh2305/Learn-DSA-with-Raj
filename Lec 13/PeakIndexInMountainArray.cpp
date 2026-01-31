#include<iostream>
using namespace std;

int Peak(int arr[],int size){
    int left =0;
    int right = size-1;
    
    while(left<right){
        int mid = left + (right-left)/2;

        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
            return arr[mid];
        }

        else{
            
         if(arr[mid]<arr[mid+1]){
            
            left = mid+1;
        }
      else{
        
        right = mid;
        }
    }
        }
    
}

int main(){
    int arr1[5]={0,10,5,2,1};
    int arr2[4]={2,5,10,1};

    int PeakElement1 = Peak(arr1,5);
    cout<<"Peak Of a Mountain Array "<<PeakElement1<<endl;
    
    int PeakElement2 = Peak(arr2,4);
    cout<<"Peak Of a Mountain Array "<<PeakElement2<<endl;

}