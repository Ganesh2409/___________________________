#include<bits/stdc++.h>
using namespace std;
class Node{
public:
int data;
Node * next;
Node (int data1,Node * next_ptr){
    data = data1;
    next = next_ptr; // constructor 1

}
Node(int data1){
    data = data1;
    next = nullptr; // constructor 2
}
};


class My_LinkedList{
    public:
    Node * head;
    int length;
    My_LinkedList(){ // constructor of My_Linkedlist
    head = NULL;
    length =0;
    }
    public:
    int get_val(int index){
        if(index >= length || index < 0) return -1;
        Node * curr = head;
        while(index--){
            curr = curr -> next;
        }
        return curr -> data;
    }

    void Addathead(int val){
        Node * newnode = new Node(val);
        newnode ->next = head;
       head = newnode;
       length++;

    }
    void Addattail(int val){
        if(head == NULL){
            Addathead(val);
        }
        Node * curr = head;
        while(curr->next != NULL){
            curr = curr->next;
        }
        Node * newnode = new Node(val);
        curr->next = newnode;
        newnode ->next = nullptr;
        length++;
    }
    void Addatindex(int index,int val){
        if(index==0){
            Addathead(val);
            return;
        }
        else if(index == length-1){
            Addattail(val);
            return;
        }
        else{
            Node * curr = head;
            
            for(int i =0;i<index-1;i++){
                curr = curr->next;
            }
            Node * newnode = new Node(val);
            newnode ->next = curr->next;
            curr->next = newnode;

        }
        length++;
    }

    void deleteathead(){
        Node * deleted = head;
        head = head->next;
        delete deleted;
        length--;
    }

    void deleteattail(){
        Node * curr = head;
        while(curr->next->next !=NULL){
            curr = curr->next;
        }
        Node * deleted = curr->next;
        curr->next = curr->next->next;
        delete deleted;
        length--;
    }

    void deleteatindex(int index){
        
        if(index == 0){
            deleteathead();
        }
        if(index == length-1){
            deleteattail();
        }
        Node * curr = head;
        for(int i =0;i<index-1;i++){ // u go until the previous index
            curr = curr->next;
        }
        Node * deleted = curr->next;
        curr->next = curr->next->next;
        delete deleted;
        length--;
    }



    void Print_LL(){
        Node * curr = head;
    while(curr != NULL){
        cout<<curr->data<<" ";
        curr = curr->next;

    }
    cout<<endl;
}
};


int main()
{
My_LinkedList l;
l.Addathead(1);
l.Addattail(2);
l.Addatindex(2,3);
l.Addatindex(3,4);
l.Addattail(5);
l.deleteathead();
l.deleteatindex(1);
l.Print_LL();

 return 0;
}