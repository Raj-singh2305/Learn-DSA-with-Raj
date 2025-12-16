#include<iostream>
using namespace std;

int main(){
    
    int a = 3 , i = 4;

    
    cout<<a +(i++)<<endl;//3+4
    cout<<a +(i++) + i<<endl;//3+5+6
    cout<< a+i+(++i)<<endl;//3+6+7
    cout<< a+(++i)+i<<endl;//3+8+8
    cout<<a +(i--)<<endl;//3+8
    cout<<a +(i--) + i<<endl;//3+7+6
    cout<< a+i+(--i)<<endl;//3+6+5
    cout<< a+(--i)+i<<endl;//3+4+4

    int b= 10 , c = 1;
    if(++b)// always true because of ++b is positive.
    cout<<c<<endl;
    else
    cout<< ++c<<endl;

    int d = 1;
    int e = 2;

    if(d-- >0 && ++e >2){
        cout<<"Stage1- Inside If"<<endl;//1>0&&3>2=> always true

    }else{
        cout<<"Stage2 - Inside else"<<endl;
    }
    cout<<d<<" "<<e<<endl;//0 3

    int number = 3;
    cout<<(25*(++number))<<endl;//25*4=100

    int f =1 ;
    int g = f++;
    int h = ++f;
    cout<<g<<endl;//1
    cout<<h<<endl;//3





}