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

