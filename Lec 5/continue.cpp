#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number :";
    cin>>n;
   for(int i = 1 ; i<n ; i++){
     cout<<i<<endl;
     cout<<i+1<<endl;
     continue;

     cout<<i+2<<endl;

   }

}