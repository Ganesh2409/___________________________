// Method -1 

#include<bits/stdc++.h>
using namespace std;
class Node{
    int data;
    Node *next;
public:
    Node(int val){
        this->data = val;
        this->next=nullptr;
    }

};

class My_LL{
    public:
    Node*head;
    int length;
    My_LL(){
        head =NULL;
        length =0;
    }
}

int main()
{

 return 0;
}


Node* reverseLinkedList(Node *head)
{
    if(head == NULL || head->next == NULL){
        return head;
    }
    // recursive solution buddy ! 
    // brack down the problem for smaller steps and try to swap the links of 1 st node and 2nd node of ll 
    // such that the nodes frm 2 nd to n-1 nodes are already reversed by recursion buddy !
    
    Node *newhead =  reverseLinkedList(head->next);
    
    Node * front = head->next;
    front ->next = head;
    head->next=NULL;
    return newhead;
}