#include<iostream>
using namespace std;

string isPrime(){
    int n ;
    cout<<"Enter a number: ";
    cin>>n;

    for (int i=2;i<=n-1;i++){
        if(n%i == 0){
            return "Number is not Prime";
        }
    }
    return "Number is Prime";
}

int main(){

    string result = isPrime();
    cout<<result<<endl;
    return 0;
}