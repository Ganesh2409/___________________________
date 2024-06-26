#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node * next;

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* array2LL(vector<int>&v){
    int n = v.size();
    if(n == 0) return nullptr;
    Node * head = new Node(v[0]);
    Node * curr = head;
    for(int i =1;i<n;i++){
        Node * newnode = new Node(v[i]);
        curr->next = newnode;
        newnode ->next = nullptr; // its optional buddy by default the newnodes to nest is always points to null
        curr = newnode;

    }
    return head;

}

void print_LL(Node * head){
    Node * curr = head;
    while(curr != NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i =0;i<n;i++){
        cin>>v[i];
    }
    Node * head = array2LL(v);
    print_LL(head);

 return 0;
}