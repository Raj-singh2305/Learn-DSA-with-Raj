#include<iostream>
#include <climits>
using namespace std;

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

    int intersectionArr[k];

    for(int i =0;i<5;i++){
        for(int j =0;j<6;j++){
            if(arr1[i]==arr2[j]){
                intersectionArr[k]=arr1[i];//intersectionArr.push_back(arr1[i]);same h hi h
                k++;
                arr2[j]=INT_MIN; // to avoid counting duplicates
                break; // to avoid counting same element from arr1 again
        
            }
        }
    }

    printingArray(intersectionArr,k);

}