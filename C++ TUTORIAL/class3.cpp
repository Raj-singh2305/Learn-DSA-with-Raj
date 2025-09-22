#include <iostream>
using namespace std;
class node{

public:
    int data; 
    node *next ; 
    node (int a){
        data = a ; 
        next = NULL ;
    }


} ; 


    void display( node* ptr1 ){
         node* temp=ptr1;  // iterator

         while(temp!=NULL){
            cout<<temp->data<<endl;
            temp=temp->next;
         }
    }

int main(){

    node m1(1), m2(2) , m3(3), m4(4),m5(5);
    m1.next = &m2 ;
    m2.next = &m3 ;
    m3.next = &m4 ;
    m4.next=  &m5;
    node *head = &m1 ;

    display(head);
 return 0 ;
}