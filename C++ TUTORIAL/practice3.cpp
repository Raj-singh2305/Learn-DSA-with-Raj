//  make a public member function that accepts head pointer as parameter and a integer value
// this function makes a new node with the given int value at the last of the linked list starting from head;

#include <iostream>
using namespace std;

class node
{

public:
    int data;
    node *right;
    node* left;
    node() {}
    node(int a)
    {
        data = a;
        right = NULL;
        left=NULL;
    }
};
void insert(node *root,int val1,int val2){
    node *leaf1=new node(val1);
    node *leaf2=new node(val2);
    root->right=leaf1;
    root->left=leaf2;
}
void display(node* ptr1){
    node* temp=ptr1;

    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp =temp->left;
    }
}
int main()
{
    
    node *n2 = new node(10);
    node *root=n2;

}