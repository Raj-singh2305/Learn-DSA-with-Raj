#include<iostream>
using namespace std;



int main(){
 
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    int sum=0;
    int ans ;

    int arr[100];
  for(int i=0;i<size;i++){
    cout<<"Enter the element "<< i <<" of array: ";
        cin>>arr[i];    
    }

    // for(int i=0;i<size;i++){
    //     for(int j=i+1;j<size;j++){
    //         if(arr[i]==arr[j]){
    //             cout<<"Duplicate element is: "<<arr[i]<<endl;
    //         }
    //     }
    // }

    for(int i = 0; i<size; i++){
        sum += arr[i];
        int sum_of_natural_numbers = (size-1)*(size)/2;
        ans = sum - sum_of_natural_numbers;

    }


    cout<<"The duplicate number is: "<<ans<<endl;

    int ans1 =0;

    //xoring all arrays elements
    for(int i = 0; i<size; i++){
       ans1 = ans1^arr[i];
    }
    // xoring all numbers from 0 to n-1
    for(int i = 0; i<size; i++){
       ans1 = ans1^i;
    }
    cout<<"The duplicate number using xor is: "<<ans1<<endl;
}