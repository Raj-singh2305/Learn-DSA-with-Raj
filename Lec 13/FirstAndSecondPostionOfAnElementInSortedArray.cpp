#include <iostream>
using namespace std;

int TestNumber(int arr[],int size,int k){
    int left  = 0 ;
    int right = size -1;
    while(left<=right){
        int mid = left +(right-left)/2;
        if(arr[mid]==k){
            if(arr[mid+1]==arr[mid]){
                 cout<<"First occuring index "<<mid<<" Second occuring index "<<mid+1;
                break;
               return 0;
            }
            if(arr[mid]==arr[mid-1]){
                cout<<"First occuring index "<<mid-1<<" Second occuring index "<<mid;
                break;
                return 0;
            }
        }
        else if(arr[mid]<k){
            left = mid +1;
        }
        else{
            right= mid -1;
        }
    }
    return -1;
}

int main(){
    int arr[6]={1,2,3,4,4,5};

    TestNumber(arr,6,4);
}