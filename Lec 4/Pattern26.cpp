#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>> n;

    int i = 1;
    while (i<=n){
        int space = n-i;
        while(space){
            cout<<" ";
            space--;
        }
        int j = 1;
        int count = 1;
        while(j<=i){
            cout<<count;
            count++;
            j++;
        }
        int k = 1;

        while(k<=(i)){
            // cout<<count2;
            cout<<i-k+1;
            k++;
        }
        
        cout<<endl;
        i++;
    }
}