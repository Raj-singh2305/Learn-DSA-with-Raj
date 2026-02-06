#include<iostream>
using namespace std;

void printingArr(int arr[], int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void SelectionSort(int arr[], int n) {

    for(int i = 0; i < n - 1; i++) {

        int minIndex = i;

        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        swap(arr[minIndex], arr[i]);
    }
}
//selection sort is an in-place comparison sorting algorithm. It has an O(n^2) time complexity, which makes it inefficient on large lists, and generally performs worse than the similar insertion sort. Selection sort is noted for its simplicity and has performance advantages over more complicated algorithms in certain situations, particularly where auxiliary memory is limited.

int main(){
    int arr[5]= {64,25,12,22,11};
    
    SelectionSort(arr,5);

    printingArr(arr,5);

}