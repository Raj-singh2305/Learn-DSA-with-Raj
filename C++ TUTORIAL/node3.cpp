//  make a public member function that accepts head pointer as parameter and a integer value
// this function makes a new node with the given int value at the last of the linked list starting from head;

#include <iostream>
using namespace std;

class node{

public:
    int data; 
    node *next ; 
    node(){}
    node (int a){
        data = a ; 
        next = NULL ;
    }


} ; 

    void insertAtHead(node* head,int val){
        
}

    void insertAtTail(node* head,int val){
        // node new_node(val); 
        // ptr->next=& new_node;

        // node* new_node =new node(val);
        // head->next=new_node;  
        
        node* temp= head;
        while(temp->next!=NULL){
            temp=temp->next;
        }

        node* new_node=new node(val);
        temp->next=new_node;


    }
    
void display( node* ptr1 ){
         node* temp=ptr1;  // iterator

         while(temp!=NULL){
            cout<<temp->data<<endl;
            temp=temp->next;
         }
    }
int main(){
// create an object pointer using new
//  name the pointer 'head'
    node * head=new node(5);
    insertAtTail(head,10);
    display(head);
 return 0 ;
}