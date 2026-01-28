#include<iostream>
using namespace std;

//2 pointer approach

int printingArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr1[5]={1,2,2,3,4};
    int arr2[6]={2,3,4,5,6,7};
    int k = 0;
    
    int intersectionArr[k]; // maximum size can be size of smaller array

    int i = 0, j = 0;
    while(i<5 && j<6){
        if(arr1[i]<arr2[j]){
            i++;
        }else if(arr1[i]==arr2[j]){
            intersectionArr[k]=arr1[i];
            k++;
            i++;
            j++;
        }
        else{
            j++;
        }
    }

    printingArray(intersectionArr,k);
}