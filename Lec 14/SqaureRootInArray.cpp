#include<iostream>
#include<cmath>
using namespace std;

int SquareRoot(int arr[],int size,int k){
    int n = pow(k,0.5);

    int s = 0;
    int e = size-1;

    while(s<=e){
        int mid = s + (e-s)/2;

        if(arr[mid]==n){
            return mid;
        }
        else if(arr[mid]<n){
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[5]={1,2,3,5,8};

    cout<<"square root present at index "<<SquareRoot(arr,5,27);
}