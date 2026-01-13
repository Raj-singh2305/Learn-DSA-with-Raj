#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(n==2){
        cout<<"A prime number"<<endl;
    }

    else{
        for(int i = 2;i<n;i++){
        if(n%i==0){
            cout<<"Not a prime number"<<endl;
            break;
        }else{
            cout<<"A prime number"<<endl;
            break;
        }
    }
    }
}