#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int left =0;
    int right = size-1;


    while(left<=right){
        int mid = left + (-left+right)/2; // for outwards range of integer 
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            left=mid+1;

        }else{
            right = mid -1;
        }
        // mid = (left+right)/2;
    }
    return -1;
}

int main(){

    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};

    int evenindex = binarySearch(even,6,12);

    cout<<evenindex<<endl;

    int oddindex = binarySearch(odd,5,8);
    cout<<oddindex<<endl;
}