#include<iostream>
using namespace std;

int Number_of_ones(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

   int ans =0;
   while(n!=0){
    if(n%2 == 1){
        ans++;
        
    }
    n= n/2;
    
}
return ans;
}

int main(){
    int a = Number_of_ones();
    int b = Number_of_ones();
    cout<<"Total number of 1's in both numbers is: "<< a + b <<endl;
    return 0;
}