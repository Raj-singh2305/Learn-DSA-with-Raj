#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int i =0 ;
    int ans = 1;
    // while(n!=0){
    //     int digit = n%2;
    //     ans =  (digit*pow(10,i))+ans;
    //     // cout<<digit;15
        
        
    //     n=n/2;
    //     i++;
    
    // }
    for(i=0;n!=0;i++){
        int digit = n%2;
        ans = (digit*(pow(10,i)))+ans;
        n=n/2;
    }
    cout<<ans;
}