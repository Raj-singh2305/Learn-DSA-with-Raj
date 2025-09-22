#include<iostream>
using namespace std;
class node{
    public:
    int data;//box banaya
    node*next;

    node(){};
    node(int a){
        data =a;
        next =NULL;//object value initialzation
    }
};
void insert(node*ptr,int val){
    node *new_node= new node(val);
    ptr->next=new_node;
}


void display(node* ptr1){
    node* temp=ptr1;

    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp =temp->next;
    }


}

int main(){
    //create an object pointer using new
    //name the pointer head
    node *head =new node(5);
    insert(head,10);
    display(head);
}
//jb kisi fn mai node banani h direct object ni bnana using new ki help se obj bnana 