#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;

    int i = 1;
    int count = 0;
    while(i<=n){
        int j=1;
        while(j<=n){
            count = count+1;
            cout<<count<<" ";
            // cout<<(i-1)*n+j<<" ";
            j++;
        }cout<<endl;
        i++;
    }
}