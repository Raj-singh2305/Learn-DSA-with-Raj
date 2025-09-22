#include<iostream>
using namespace std;
class hello{
    public:
    int a;
    hello(int b){
        a=b;
    }
    void setData(){
        cin>>a;
    }
    void displayData(){
        cout<<"a="<<a<<endl;
    }

};
int main(){
    hello s1(4);
    s1.displayData();
    hello *s_ptr=new hello(5) ;
    cout<<s_ptr<<endl;



}