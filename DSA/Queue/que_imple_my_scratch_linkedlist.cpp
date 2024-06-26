#include<bits/stdc++.h>
using namespace std;
class Node{
    private:
    int data;
    Node * next;
    public:
    Node(int val){
        data = val;
        next = nullptr;
    }
    friend class my_que_ll;
};
class my_que_ll{
    private:
    Node * head;
    Node * tail;
    int length;
    public:
    my_que_ll(){
        head = nullptr;
        tail = nullptr;
        length =0;
    }

    void push(int val){
        Node * newnode = new Node(val);
        if(head == nullptr){
            head = newnode;
            tail = newnode;
        }
        else{
            tail -> next = newnode;
            tail = newnode;
        }
        ++length;
        
    }
    int pop(){
        if(head  == nullptr ) return -1;
        int poped = head->data;
        Node * temp = head;
        head = head->next;
        if(head == nullptr) tail = nullptr;
        delete temp;
        --length;
        return poped;
    }

    int  get_size(){
        return length;
    }

    int peek(){
        if(head == nullptr){
            return -1;
        }
        return head->data;
    }
    bool is_empty(){
        return length==0;

    }

};
int main(){
    my_que_ll QLL;
    QLL.push(1);
    QLL.push(2);
    QLL.push(3);
    QLL.push(4);
    cout<<QLL.pop()<<endl;
    cout<<QLL.get_size()<<endl;
    cout<<QLL.is_empty()<<endl;
    QLL.pop();
    QLL.pop();
    QLL.pop();
    cout<<QLL.is_empty()<<endl;
}
  