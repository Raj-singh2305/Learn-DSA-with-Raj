#include<iostream>
using namespace std;

int main(){
    int a = 3;
    cout<<a<<endl;

    if(true){
        int a = 5;//block ke andr hi use hoga bahar excess ni hoga
        cout<<a<<endl;
    
    }                     

    cout<<a<<endl;
    // int a = 5; => error => redefinition of a
    // cout<< a<<endl;

    int i =8; 

    for(int i = 0 ; i<8;i++){
        cout<<"HI"<<endl;
    }
}