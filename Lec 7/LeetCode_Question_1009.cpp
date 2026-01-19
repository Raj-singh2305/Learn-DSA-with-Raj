#include<iostream>
#include<cmath>
using namespace std;   

int main(){

    int n;
    cout << "Enter a number: ";
    cin>>n;
    int ans = 0;
    int i = 0;

    if(n == 0){
        ans = 1;
    }

    

    while(n!=0){
        int digit = n%2;
        if(digit == 0){
            ans = ans  +  pow(2,i);
        }
       
       
        i++;
        n = n / 2;
    }
    cout<<ans<<endl;
}
/*
int m =n;
int mask =0;
while(m!=0){
    mask = (mask << 1) | 1;
    m = m >> 1;
}
    int ans = (~n) & mask;
    cout<<ans<<endl;

*/
