#include<iostream>
#include <climits>
using namespace std;

int main(){
    int arr1[5]={1,2,2,3,4};
    int arr2[6]={2,2,3,5,6,7};


    int sum;
    cout<<"Enter the pair sum value: ";
    cin>>sum;

    for(int i=0;i<5;i++){
        for(int j =0;j<6;j++){
            if(arr1[i]+arr2[j]==sum){
                cout<<"Pair is: ("<<arr1[i]<<","<<arr2[j]<<")"<<endl;
                arr2[j]=INT_MIN; // to avoid counting duplicates
            }
        }
    }
//    sort(arr2.begin(),arr2.end());=>for sorting a array vector
}