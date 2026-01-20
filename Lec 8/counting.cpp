#include<iostream>
using namespace std;

//function definition

void printCounting(int n){// for no return we use void => function signature
    for(int i=1;i<=n;i++){
        cout<<i<<endl;
    }
}

int main(){
   int n ;
    cout<<"Enter a number: ";
    cin>>n;
    //function calling
    printCounting(n);


    return 0;
}