// Stack implementation using the vectors 



#include<bits/stdc++.h>
using namespace std;
class my_stack{
    private:
    vector<int>ans;
    public:
    my_stack(){

    }
    void push(int val){
        ans.push_back(val);

    }
    int size(){
        return ans.size();

    }
    int top(){ // what  if the stack is empty before u return top most element  something buddy
        if(ans.size()==0) return -1;
        return ans.back();

    }
    int pop(){
        if(ans.size()==0){
            return -1;
        }
        int ele = ans.back();
        ans.pop_back();
        return ele;

    }
};
int main(){
    my_stack *s = new my_stack();
    s->push(1);
    s->push(2);
    s->push(3);
    s->push(4);
    cout<<s->top()<<endl;
    s->pop();
    cout<<s->top()<<endl;
    cout<<s->size()<<endl;
    return 0;
}
/* in built stack key word is there so try not ot use it */