#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    public:

    Node( int val){
        data = val;
        next = NULL;
    }
    friend class Deque_scr_LL;
};


class Deque_src_LL {
    Node* head;
    Node* tail;
    int length;

public:
    Deque_src_LL() {
        length = 0;
        head = NULL;
        tail = NULL;
    }

    void push_front(int val){
        Node * newnode = new Node(val);
        if(head == NULL){
            head = newnode;
            tail = newnode;
        }
        else{
            newnode ->next = head;
            head  = newnode;
        }
        ++length;
    }
    void push_back(int val){
        Node * newnode = new Node(val);
        if(tail == NULL){
            tail = newnode;
        }
        else{
            tail->next = newnode;
            tail = newnode;
        }
        ++length;

    }
    int pop_front(){
        if(head == NULL) return -1;
        int front_ele = head->data;
        Node * temp = head;
        head = head->next;
        if(head == NULL) tail = NULL; // this is  a base case buddy 
        delete temp;
        --length;
        return front_ele;
    }



    int pop_back() {
    if (tail == NULL) return -1;  // Deque is empty
    int back_ele = tail->data;

    if (head == tail) {  // If there is only one node in the deque
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        --length;
        return back_ele;
    }

    Node* temp = head;
    while (temp->next != tail) {
        temp = temp->next;
    }

    Node* delNode = tail;
    tail = temp;
    tail->next = NULL;
    delete delNode;
    --length;
    return back_ele;
}


    int front(){
        return head->data;
    }
    int back(){
        return tail->data;
    }
    int get_size(){
        return length;
    }
    bool is_empty(){
        return length==0;
    }

};



int main(){

    Deque_src_LL QLL;
    QLL.push_front(1);
    QLL.push_back(2);
    QLL.push_front(3);
    QLL.push_back(4);
    cout<<QLL.pop_front()<<endl;
    cout<<QLL.front()<<endl;
    cout<<QLL.get_size()<<endl;
    cout<<QLL.is_empty()<<endl;
    QLL.pop_front();
    QLL.pop_back();
    QLL.pop_front();
    cout<<QLL.is_empty()<<endl;

}