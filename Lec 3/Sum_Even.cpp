#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter No For Sum :";
    cin>>n;

    int i =0;
    int sum=0;

    while(i<=n){
        sum = sum + i;
        i=i+2;
    }
     cout<<"The Even Sum is "<< sum;

}