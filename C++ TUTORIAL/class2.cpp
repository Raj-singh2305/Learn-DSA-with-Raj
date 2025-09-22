#include<iostream>
using namespace std;
class node{
    public:
    int a;
    node*ptr;
    node(int b){ 

        a=b;
        ptr=NULL;
    }
    void setData(){
        cin>>a;
    }
    void displayData(){
        cout<<"a="<<a<<endl;
    }

};
int main(){
    node n1(3);
    node n2(4);
    node n3(5);
    node n4(6);
    node n5(9);
    n1.ptr=&n2;
    n2.ptr=&n3;
    n3.ptr=&n4;
    n4.ptr=&n5;
    cout<<n1.ptr->a;
    


}