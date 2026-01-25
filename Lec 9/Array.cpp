#include<iostream>
using namespace std;

int printArray(int arr[], int size){
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}


int main(){
    int number[15];

    // cout<<"Value at 0 index: "<<number[0]<<endl;

    //initializing an array
    int second[3] = {2,4,6};

    cout<<"Value at 0 index of second array: "<<second[0]<<endl;

    int sum = 0;
    printArray(second, 3);
    // for (int i =0;i<3;i++){
    //     cout<<second[i]<<" ";
    //     sum+=second[i]; 
    // }
    // cout<<endl;
    // cout<<"sum of elements: "<<sum<<endl;

    cout<<"Size of second array: "<<sizeof(second)/sizeof(int)<<endl;

    char ch[4]={'a','b','c','d'};
    for(int i=0;i<4;i++){
        cout<<ch[i]<<" ";
    }

}