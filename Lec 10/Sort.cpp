#include<iostream>

using namespace std;

int printingArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sort012(int arr[], int n) {
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else { // arr[mid] == 2
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}


int main(){
    int arr[9]={0,1,2,1,0,2,1,0,2};

    printingArr(arr,9);
  

   

    

    sort012(arr,9);
    printingArr(arr,9);
}