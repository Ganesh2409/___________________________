#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    // Constructor

    Node(int val){
        this-> data = val;
        this->next = NULL;
    }
};


class mylinkedlist{
public:
Node *head;
int length;
    mylinkedlist(){
        head = NULL;
        length =0;
    }
          



void addAtHead(int val){

    Node *newHead = new Node(val);
    newHead->next = this->head; // just visualize it buddy 
    this->head = newHead;
    this->length+=1;
    length+=1;

}

int get(int index){
    if(index <0 || index >= this->length) { // here we are handling both the index with -ve and index greater than the size of the LL
        return -1;
    }

    Node *curr = this->head;

    for(int i=0;i<index;i++){
        curr = curr->next;

    }
    return curr->data;


}
    void addAtTail(int val){
        if(this->length == 0){
            addAtHead(val);
            return;
        }

        // what if the node is not empty it has some elements

        Node *curr = this->head;

        while(curr->next !=NULL){
            curr = curr->next;
        }

        Node *newNode = new Node(val);

        curr->next = newNode; // we need not to add the null specifically for the newNode bcus its added by default 
        this->length+=1;
    }


    void addAtIndex(int index,int val){
        if(index ==0){ // if the index is 0 so it simply means to add at the begining of LL 
            addAtHead(val);
            return;
        }

        if(index > this->length) return;
        

        Node *curr = this->head;

        for(int i=0;i<index-1;i++){
            curr = curr->next; // u have reache the crct index position that u need to add ur element here 
        }
         // what if the size of the LL is index it need to added
        Node *newnode = new Node(val);
        newnode->next = curr->next; // here iam performing the linkahe work buddy 
        curr->next = newnode;
        this->length +=1;

    }


    void deleteAtHead(){
        if(this->length ==0){
            return;
        }

        Node *oldNode = this->head;
        this->head = head->next; // just have a look over here buddy !
        this->length -=1;
        delete  oldNode;



    }

    void deleteAtIndex(int index){

        if(index<0 || index >=this->length) return;

        if(index ==0){
            deleteAtHead();
            return;
        }
        Node *curr = this->head;

        for(int i=0;i<index-1;i++){
            curr = curr->next;
        }
        Node *uselessNode = curr->next;
        curr->next = curr->next->next;
        this->length -=1;
        delete uselessNode;
    }
};
    int main() {
    mylinkedlist *obj = new mylinkedlist();
    obj->addAtHead(1);
    obj->addAtIndex(1, 2);
    obj->addAtTail(3);
    obj->deleteAtHead();
    obj->deleteAtIndex(1);
    cout<<"The LL Elements are :- >> "<<endl;
    int length = obj->length;

    for (int i = 0; i < length; i++) { // Loop over valid indices
        cout << obj->get(i) << endl;
    }

    return 0;
}
