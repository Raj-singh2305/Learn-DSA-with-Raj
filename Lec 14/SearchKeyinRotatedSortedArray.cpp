#include<iostream>
using namespace std;

int getPivot(int arr[],int n){
    int s = 0;
    int e = n-1;

    while(s<e){
        int mid = s+(e-s)/2;

        if(arr[mid]>=arr[0]){
            s = mid +1;
        }
        else{
            e = mid;
        }
    }
    return s;
}

int BinarySearch(int arr[],int n,int target){
    int Index_pivot = getPivot(arr,n);
    if(arr[Index_pivot]<=target && target<= arr[n-1])//line second
    {
        int  s = Index_pivot;
        int e = n-1;

        while(s<=e){
            int mid = s + (e-s)/2;

            if(arr[mid]==target){
                return mid;
            }
            else if(arr[mid]<target){
                s = mid + 1;
            }
            else{
                e = mid -1;
            }
        }
    }
    else
    {
         int  s = 0;
        int e = Index_pivot-1;

        while(s<=e){
            int mid = s + (e-s)/2;

            if(arr[mid]==target){
                return mid;
            }
            else if(arr[mid]<target){
                s = mid + 1;
            }
            else{
                e = mid -1;
            }
        } 
    }
}

int main(){
    int arr[5] = {7,9,1,2,3};

    cout<<"Target is present at index "<<BinarySearch(arr,5,2);
}