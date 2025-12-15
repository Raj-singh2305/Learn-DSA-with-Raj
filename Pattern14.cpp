#include<iostream>
using namespace std ; 

int main (){
    int n;
    cout<<"Enter a number : ";
    cin >> n;

    int count = 0;

    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            char ch ='A'+count;
            cout<<ch << " ";
            count++;
            j++;

        }cout<<endl;
        i++;
    }
}