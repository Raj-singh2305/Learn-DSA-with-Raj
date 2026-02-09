#include<iostream>  
using namespace std;

void InsertionSort(int arr[], int size) {

    for(int i = 1; i < size; i++) {
        int key = arr[i];   // original value save
        int j = i - 1;

        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; // shift
            j--;
        }

        arr[j + 1] = key; // insert at right place
    }
}

int main() {
    int arr[7] = {1,7,10,4,8,2,11};

    InsertionSort(arr, 7);

    cout << "Sorted array: ";
    for(int i = 0; i < 7; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
