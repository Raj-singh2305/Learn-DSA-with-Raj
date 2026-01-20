#include<iostream>
using namespace std;

int factorial(int n){
    int fact =1;
    for(int i=1;i<=n;i++){
        fact = fact * i;
    }
    return fact;
}

int nCr(){
    int n ,  r ;
    cout<<"Enter n and r: ";
    cin>>n>>r;
    int ans = factorial(n) / (factorial(r) * factorial(n - r));
    return ans;
}

int main(){
    int result = nCr();
    cout<<"Combination is: "<< result <<endl;
    
    return 0;
}