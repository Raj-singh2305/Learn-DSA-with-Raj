#include<iostream>
using namespace std;
 
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;

    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=(n-i+1)){
            cout<<j;
            j++;
        }
        int space = i-1;
        while(space){
            cout<<"*";
            space--;
        }
        int space1 = i-1;
        while(space1){
            cout<<"*";
            space1--;
        }
        int k = 1;
        int value = n-i+1;
        while(k<=(n-i+1)){
            cout<<value;
            value--;
            k++;
        }

        
        
        
        
        cout<<endl;
        i++;
    }
}