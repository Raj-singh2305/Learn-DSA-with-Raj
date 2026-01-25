#include<iostream>
using namespace std;

int dummy(int n){
    n++;
    cout<<"Value of n inside dummy function: "<<n<<endl;
    return n;
}

int main(){
    int n;
    cout<<"Enter a number: ";   
    cin>>n;
    dummy(n);
    cout<<"Value of n before calling dummy function: "<<n<<endl;
    return 0;
}