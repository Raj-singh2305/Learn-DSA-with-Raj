#include<iostream>
using namespace std;

int main(){
    int k ;
    cout<<"Enter a negative number : ";
    cin>>k;

    int n = -1*k;



    int i =0 ;
    string ans = "";
    if(k>0){
        cout<<" Enter a valid -ve number ";
    }
    else{
        while(n!=0){
        int digit = n%2;
        digit = (digit==1)?0:1;
      
        ans =  to_string (digit) + ans;
    
        
        
        n=n/2;
        i++;
    }
   ans = '1'+ ans;//one's compliment
   
    cout<<ans;
   
    }
}