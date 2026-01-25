#include<iostream>
using namespace std;

// int getMax(int arr[], int size){
//     int maxi = INT8_MIN;
//     for(int i=0;i<size;i++){
//         if(arr[i]>maxi){
//             maxi = arr[i];
//         }
//     }
//     return maxi;
// }
// int getMin(int arr[], int size){
//     int mini = INT8_MAX;
//     for(int i=0;i<size;i++){
//         if(arr[i]<mini){
//             mini = arr[i];
//         }
//     }
//     return mini;
// }
int getMin(int arr[],int size){
    int mini = arr[0];
    for(int i =1 ; i<size;i++){
        // if(arr[i]<mini){
        //     mini = arr[i];
        // }
        mini=min(mini,arr[i]);//directly using inbuilt function
    }
    return mini;
}
int getMax(int arr[],int size){
    int maxi = arr[0];
    for(int i =1 ; i<size;i++){
        // if(arr[i]>maxi){
        //     maxi = arr[i];
        // }
        maxi=max(maxi,arr[i]);//directly using inbuilt function
    }
    return maxi;
}

int main(){
    int size ;
    cout<<"Enter the size of array: ";
    cin>>size;  

    int num[100];
    for(int i=0;i<size;i++){
        cout<<"Enter element "<<i<<": ";
        cin>>num[i];
    }
    cout<<"Maximum value is: "<<getMax(num, size)<<endl;
    cout<<"Minimum value is: "<<getMin(num, size)<<endl;
    
}