#include<iostream>
using namespace std;

void printingArr(int arr[], int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
//bubble sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted. The algorithm, which is a comparison sort, is named for the way smaller or larger elements "bubble" to the top of the list. Bubble sort has a worst-case and average time complexity of O(n^2), where n is the number of items being sorted. It is not a practical sorting algorithm for large data sets.
void BubbleSort(int arr[],int n){
    int minIndex;
    for (int i  =0 ; i<n-1;i++)  {
        minIndex = i;
        for(int j = 0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }

        }
    }
    
}

int main(){
    int arr[5]= {64,25,12,22,11};
    
    BubbleSort(arr,5);

    printingArr(arr,5);

}