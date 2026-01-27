#include<iostream>
using namespace std;


int main(){
    int arr[10]={1,2,2,2,3,3,4,4,4,4};

    int count ;

    for (int i=0; i<10;i++){
        count  = 1;
        for(int j = i+1; j<10  ; j++){
            
                if(arr[i]==arr[j]){
                 
                    count ++;
                    
                }
                
            
        }
        cout<<"The counting of "<<arr[i]<<" is: "<<count<<endl;
    }
}