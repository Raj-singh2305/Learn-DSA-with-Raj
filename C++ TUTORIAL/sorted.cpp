#include<bits/stdC++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    for(int i=0;i<=5;i++){
        if(arr[i]<=arr[i+1]){
        cout<<"true";}
        else{
            cout<<"false";
        }
    }
   return 0;
}