#include<bits/stdc++.h>
using namespace std;
class Node{
public:
int data ;
Node * next;
Node * back;

Node(int data1,Node *next1,Node*back1){
    data = data1;
    next =next1;
    back  = back1;
}
Node(int data1){
    data = data1;
    next = nullptr;
    back = nullptr;
}
};
Node * reverse_DLL(Node * head){
    // ideal condition in linkedlists buddy 
    if(head == NULL || head->next == NULL){
        return head;
    }
    
    Node * curr = head;
    Node * prev = nullptr; // Initialize prev to nullptr
    while(curr != NULL){
        prev = curr->back;
        curr->back  = curr->next;
        curr->next  = prev;
        curr = curr->back;
    }
    return prev->back; // Return the new head as previous to back which means previous to next we reversed right !
}



Node * conver_arr2DLL(vector<int>&arr){
    Node * head = new Node(arr[0]);
    Node * prev = head;

    for(int i =1;i<arr.size();i++){
        Node * curr  = new Node(arr[i],nullptr,prev);
        prev -> next = curr;
        prev = curr;
    }
    return head;
}

int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    Node * head = conver_arr2DLL(arr);
    Node * reverse_LL_Head = reverse_DLL(head);

    while(reverse_LL_Head != nullptr){
        cout<<reverse_LL_Head->data<<" ";
        reverse_LL_Head=reverse_LL_Head->next;
    }
    cout<<endl;


 return 0;
}