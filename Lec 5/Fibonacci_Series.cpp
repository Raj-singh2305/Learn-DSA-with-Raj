#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter a number : ";
    cin>>n;

    int a = 0;
    int b = 1;


    cout<<a<<endl;
    cout<<b<<endl;
    
    for(int i = 1 ;i<=n;i++ ){
        int nextNumber = a+b;
        cout<<nextNumber<<endl;
        a =b;
        b =nextNumber;
    }

}