#include<iostream>
using namespace std;
int main(){
    int a ;
    cout<<"Enter the value of a "<<endl;
    cin>>a;
    if(a>0){
        cout<<"a is positive number.";
    }
    else if(a==0){
        cout<<"a is neither positive nor negative number.";
    }
    else{
        cout<<"a is negative number.";
    }
}