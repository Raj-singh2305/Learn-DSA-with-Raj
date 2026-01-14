#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    long long m = 0;

    while(n!=0){

        m = (m*10)+(n%10);
        n=n/10;
    }
    cout<<m;
}