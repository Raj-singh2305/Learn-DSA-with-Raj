//  make a public member function that accepts head pointer as parameter and a integer value
// this function makes a new node with the given int value at the last of the linked list starting from head;

#include <iostream>
using namespace std;

class node
{

public:
    int data;
    node *next;
    node() {}
    node(int a)
    {
        data = a;
        next = NULL;
    }
};

void insertAtPos(node*  head, int pos,int val){
    node* new_node=new node(val);

    node * temp=head;
    pos-=1;
    while(pos--){
        temp=temp->next;
    }

    new_node->next=temp->next;
    temp->next=new_node;

}


void insertAtHead(node *&head, int val)
{
    node *new_node = new node(val);
    new_node->next = head;
    head = new_node;
}

void insertAtTail(node *head, int val) 
{  
    // node new_node(val);
    // ptr->next=& new_node;

    // node* new_node =new node(val);
    // head->next=new_node;

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    node *new_node = new node(val);
    temp->next = new_node;
}

void display(node *ptr1)
{
    node *temp = ptr1; // iterator

    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
int main()
{
    // create an object pointer using new
    //  name the pointer 'head'
    node *head = new node(5);
    insertAtTail(head, 10);
    insertAtTail(head, 15);
        display(head);

    insertAtPos(head,100,20);
    display(head);
    return 0;
}