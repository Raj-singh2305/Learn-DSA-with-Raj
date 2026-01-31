#include<iostream>
using namespace std;

int firstOcc(int arr[],int n ,int key){
    int s =0,e =n-1;
    int ans = -1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid]==key){
            ans = mid;
            e = mid-1;
        }
        else if(arr[mid]>key){
            e=mid -1 ;
        }else{
            s = mid+1;
        }
    }
    return ans ;
}

int lastOcc(int arr[],int n ,int key){
    int s =0,e =n-1;
    int ans = -1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid]==key){
            ans = mid;
            s = mid+1;
        }
        else if(arr[mid]>key){
            e=mid -1 ;
        }else{
            s = mid+1;
        }
    }
    return ans ;
}
pair<int,int> firstAndLastPosition(int arr[],int n ,int key){
    pair<int,int> p;
    p.first = firstOcc(arr,n,key);
    p.second=lastOcc(arr,n,key);

    return p;
}

int main(){
 int arr[7]={1,2,3,3,3,3,5};
 cout<<"first Occurence "<<firstOcc(arr,7,3)<<endl;
 cout<<"Last Occurence "<<lastOcc(arr,7,3)<<endl;
//  int pair = firstAndLastPosition(arr,7,3);
//  cout<<pair;

}