#include<iostream>
using namespace std;

int Fibonnaci(){
    int n ;
    cout<<"Enter a number: ";
    cin>>n;

    int t1 =0 ;
    int t2 =1;
    int tn;
    int i = 1;
    while(i<=(n-2)){
        tn  = t1+t2;
        t1=t2;
        t2=tn;
        i++;
    }
    return tn;

}

int main(){
    int answer = Fibonnaci();
    cout<<"The nth term of the Fibonnaci series is: "<<answer<<endl;
    return 0;
}
