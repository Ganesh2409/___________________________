// Approach_1 :- here we use the two stacks if the pop operation comes then we will transfer the all the 
// eles of stack 1 to stack 2 and we pop the s2.top() and then transfer all back to s1 

#include<bits/stdc++.h>
using namespace std;
// class queue_stack{
//     private:
//     stack<int> s1;
//     public:
//     queue_stack(){

//     }
//     void push(int val){
//         s1.push(val);
//     }
//     int  pop(){
//         stack<int>temp;
//         while(!s1.empty()){
//             temp.push(s1.top());
//             s1.pop();
//         }

//         int first_ele = temp.top();
//         temp.pop();
//         while(!temp.empty()){
//             s1.push(temp.top());
//             temp.pop();
//         }
//         return first_ele;
//     }
//     int peek(){
//         stack<int>temp;
//         while(!s1.empty()){
//             temp.push(s1.top());
//             s1.pop();
//         }
//         int peek_ele = temp.top();

//         while(!temp.empty()){
//             s1.push(temp.top());
//             temp.pop();
//         }
//         return peek_ele;
//     }
//     bool is_empty(){
//         return s1.empty();
//     }
// };

// Approach 2 :- A little optimal one buddy 
// here we are not trying to transfer the from stak 2 to stack 1 after we pop the first occurance of pop() ele 
// we check  if the s2 is empty() if not then  we can pop s2.top() for next pop() operation becase they enteredin the same order right like 5 4 3 2 1 so 
// if we transfered from the s1 to s2 then poped the first entered ele is 1 so the second entered ele likes in the below of s2 so why we need to transfer ?
// what if the s2 is empty after poping all eles and we still left to pop an ele so now transfer the eles from the s1 


class queue_stack{
    private:
    stack<int>s1,s2;
    void transfer(stack<int>&s1,stack<int>&s2){ 
        // if u want to write any funtions that will be used in class its better to write it in public: side !
    while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
    }


}
    public:
    queue_stack(){

    }
    void push(int val){
        s1.push(val);
    }
    int pop(){
        if(s2.empty()){
            transfer(s1,s2);
        }
        int pop_ele = s2.top();
        s2.pop();
    
        return pop_ele;
    }
    int peek(){
        if(s2.empty()){
            transfer(s1,s2);
        }
        int peek_ele = s2.top();
        return peek_ele;

    }
    bool is_empty(){
        return s1.empty() && s2.empty();


    }
};


int main(){
    queue_stack QSS;
    QSS.push(1);
    QSS.push(2);
    QSS.push(3);
    QSS.push(4);
    cout<<QSS.pop()<<endl;
    cout<<QSS.peek()<<endl;
    cout<<QSS.is_empty()<<endl;
    cout<<QSS.pop()<<endl;
    QSS.pop();
    QSS.pop();
    cout<<QSS.is_empty()<<endl;

}