#include<iostream>
using namespace std ;

int main(){

    int n;
    cout<<"enter a number :";
    cin>>n;

    int i = 2;

    while(i<n){
        if(n%i == 0){
            cout<<"prime number for ."<<i<<endl;
        }else{
            cout<<"Prime For "<<i<<endl;
        }
        i=i+1;
    }

}