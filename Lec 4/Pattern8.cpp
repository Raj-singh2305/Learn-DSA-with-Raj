#include<iostream>
using namespace std;

int main (){
    int n ;
    cout << "Enter a number : ";
    cin >> n;

    int i =1;
    while(i<=n){
       int value = i ;
       int j = 1;
       while (j<=i){
        // cout<< value << " ";
        // value--;
        cout<< i + 1 - j << " ";
        j++;
       }cout << endl;
       i++;
    }
}