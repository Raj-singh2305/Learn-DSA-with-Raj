#include<iostream>
using namespace std;
// xor operation importance in finding unique element in array
int main(){
    int arr[5]={1,2,3,1,3};
    int ans;
    for(int i =0; i<5; i++){
        if(i+1<5){
             ans = (arr[i])^(arr[i+1]);
        }
    }
    cout<<ans;
}