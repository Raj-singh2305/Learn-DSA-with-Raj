#include<iostream>
using namespace std;

void printingArr(int arr[], int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void BubbleSort(int arr[],int n){
    int minIndex;
    for (int i  =0 ; i<n-1;i++)  {
        bool swapped = false;
        minIndex = i;
        for(int j = 0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }

        }
        if(!swapped){
            //already sorted, no need to continue
            break;
        }
    }
    
}

int main(){
    int arr[5]= {64,25,12,22,11};
    
    BubbleSort(arr,5);

    printingArr(arr,5);

}