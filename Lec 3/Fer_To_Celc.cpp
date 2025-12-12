#include<iostream>
using namespace std ;

int main(){

    int n;

    cout<<"Enter last ferenhite temperature : ";
    cin>>n;
    int F=0;
    
    int i =0;
    int C=0;
    int K=0;

    while(F<n){
        C=(F-32)*5/9;
        K=C+273;
        F=F+1;
        cout<<"Ferenhite = " << F  <<" => Celsius = "<< C <<" => Kelvien "<<K<<endl;
    }

}