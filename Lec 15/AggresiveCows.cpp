#include<iostream>
#include<algorithm>
using namespace std;

bool isPossible(int arr[],int n, int k ,int mid){
    int cowCount = 1;
    int lastPos = arr[0];
    for(int i =0; i<n;i++){
        if(arr[i]-lastPos >= mid){
            cowCount++;
            if(cowCount==k){
                return true;
            }
            lastPos = arr[i];
        }
    }
    return false;
}

int aggressiveCows(int arr[],int n , int k){

    sort(arr, arr + n);
    int s =0;

    int maxi = -1;

    for(int i =0;i<n;i++){
        maxi = max(maxi,arr[i]);

    }
    int e = maxi;
    int ans=-1;

    while(s<=e){
        int mid = s+(e-s)/2;

        if(isPossible(arr,n,k,mid)){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return ans;
}



int main(){
    int arr[5]={4,2,1,3,6};

    cout<<"the largest minimun distance "<<aggressiveCows(arr,5,2);
}