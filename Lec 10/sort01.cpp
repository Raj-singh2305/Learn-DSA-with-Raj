#include<iostream>
using namespace std;

int printingArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[6]={0,1,1,0,1,0};
    int left= 0;
    int right=5;
    // while(left<right){
    //     if(arr[left]==0&&arr[right]==1){
    //         left++;
    //         right--;
    //     }
    //     else if(arr[left]==1&&arr[right]==0){
    //         swap(arr[left],arr[right]);
    //         left++;
    //         right--;
    //     }
    //   else if(arr[left]==1&&arr[right]==1){
    //         right--;
    //     }
    //     else{
    //         left++;
    //     }
    // }
    while(left<right){
        if(arr[left]==0){
            left++;
          
        }
        else if(arr[left]==1&&arr[right]==0){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
 
        else{
            right--;
        }
    }
    printingArr(arr,6);
}