#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int n;
    cout << "Enter a number: ";
    cin>>n;

    int ans ;
    int i = 0;
    while(i<=30){
        ans = pow(2,i);
        if(ans == n){
            cout<<"true"<<endl;
            break;
        }
        i++;
        
    }
        if(ans != n){

            cout<<"false"<<endl;
        }
    

    

}