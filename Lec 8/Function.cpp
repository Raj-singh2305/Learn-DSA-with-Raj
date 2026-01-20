#include<iostream>
using namespace std;

int power(
    // gobal variables
){
    int a , b; // local variables
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    int result =1;
    for(int i=0;i<b;i++){
        result = result * a;
    }
    
    return result;
}

int main(){

    /*int a ,b; // local variables
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    int answer = power(a,b);
    cout<<answer<<endl;
    int c ,d;
    cout<<"Enter two numbers: ";
    cin>>c>>d;

    int answer2 = power(c,d);
    cout<<answer2<<endl;*/

    int ans = power();
    cout<< "answer is : " << ans <<endl;
    cout<< "answer is : " << ans <<endl;

    return 0;
}