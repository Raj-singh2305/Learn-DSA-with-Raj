#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter a number : ";
    cin >> n;

    int i = 1;
    int count = 0 ;
    while(i<=n){
        int j =1;
        while (j<=i)
        {
            // count++;
            // cout<< count << " ";
            cout<< j + i*(i-1)/2 << " ";

            j++;
        }cout<<endl;
        i++;
        
    }
}