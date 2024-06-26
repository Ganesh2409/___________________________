#include<bits/stdc++.h>
using namespace std;

/*
class Node{
public:
    int data;
    Node *next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class my_stack{
public:
    Node *top_ptr; // Renamed to avoid conflict with function name
    int size;

    my_stack() {
        top_ptr = NULL;
        size = 0;
    }

    void push(int val) {
        Node *newnode = new Node(val);
        newnode->next = top_ptr;
        top_ptr = newnode;
        size++;
    }

    int pop() {
        if(is_empty()) return -1; // Changed return value to indicate error
        int topData = top_ptr->data;
        Node *temp = top_ptr;
        top_ptr = top_ptr->next;
        delete temp;
        size--;
        return topData;
    }

    int getsize() {
        return size;
    }

    int top() {
        if(is_empty()) return -1; // Changed return value to indicate error
        return top_ptr->data;
    }

    bool is_empty() {
        return top_ptr == NULL;
    }
};

*/


// Approach-2 

class my_stack{ // << 
    public:
    forward_list<int>li;
    my_stack(){

    }

    void push(int val){
        li.push_front(val);
    }

    bool empty() {
		int size = distance(li.begin(),
                        li.end());
        return size == 0;
    }

    int pop(){
        if(empty()) return -1;
        int ans = li.front();
        li.pop_front();
        return ans;
    }
    int top(){
        return li.front();
    }
    void clear(){
        li.clear();
    }

};



int main() {
    my_stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    cout<<s.empty()<<endl;
    return 0;
}

