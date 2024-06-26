#include<bits/stdc++.h>
using namespace std;
class Node{
public:
int data ;
Node *next;
Node(int data1,Node * next1){
    data = data1;
    next = next1;
}
Node(int data1){
    data =data1;
    next = nullptr;
}

};

Node* Deep_copy_LL(Node * head){ 
    if(head == NULL) return NULL; 

    Node *curr = head;
    Node *new_head = new Node(curr->data);
    Node *new_ptr = new_head;

    while(curr->next !=NULL){
        Node * ele = new Node(curr->next->data);
        new_ptr ->next = ele;
        curr= curr->next;
        new_ptr = new_ptr->next;
    }
    return head;
}

void print_LL(Node * head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head ->next;
    }
}




int main()
{

    Node * head = new Node(1);
    head->next= new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    Deep_copy_LL(head);
    print_LL(head);
    cout<<"Deep Copy is sucess full"<<endl;

 return 0;
}