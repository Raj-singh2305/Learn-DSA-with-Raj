#include<iostream>
using namespace std;

string linearSearch(int arr[], int size, int key){
    for(int i = 0;i<size;i++){
        if(arr[i]==key){
            return "key is present at index " + to_string(i);
            // cout<<"Key is present at index "<<i<<endl;
            break;
        }
    }
    return "Key is not present in array";
}

int main(){
    int arr[10]={5,7,-2,10,22,-2,0,5,22,1};

    int key;
    cout<<"Enter the key to be searched: "; 
    cin>>key;
    cout<<linearSearch(arr, 10, key)<<endl;

    // for(int i = 0;i<10;i++){
    //     if(arr[i]==1){
    //         cout<<"One is present in array at index "<<i<<endl;
    //         break;
    //     }
    // }
}