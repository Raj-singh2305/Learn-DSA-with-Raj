#include<iostream>
using namespace std;

void Swap(int arr[],int size){
    int start = 0;
   int end = size-1;
   while(start<end){
         swap(arr[start], arr[end]);
         start++;
         end--;
         
   }
}

void PrintingArray(int arr[], int size){
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}

int main(){
    int arr[5] = {3, 5, 1, 8, 2};
    PrintingArray(arr, 5);
}