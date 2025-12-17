#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    cout<< "Printing count from 1 to "<<n<<endl;

    for(int i =1 ; i<=n ;i++){
        cout<<i<<endl;
    }
    int j = 1;
    for(;;){
        if(j<=n){
            cout<<j<<endl;
        }else{
            break;
        }
        j++;
    }
    for (int a = 0 ,  b = 1 ; a<=9 &&b<=8 ;a++,b++ ){
        cout<<a<<" "<< b<<endl;
    }
}