#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin >> n;

    int i =1 ;
    while(i<=n){
        int j = 1;
        char ch = 'A' + n-i;
        while(j<=i){
            // char ch = 'A' +n-i+j-1;
            cout<<ch<<" " ;
            ch++;
            j++;
        }cout<<endl;
        i++;
    }
}