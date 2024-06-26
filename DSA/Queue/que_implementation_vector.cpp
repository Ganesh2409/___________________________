#include<bits/stdc++.h>
using namespace std;
class my_queue{
    private:
    vector<int>v;
    int front ;
    public:
    my_queue(){
        front =0;

    }

    void push(int val){
        v.push_back(val);
    }
    int  pop(){
        int poped_ele = v[front];
        front++;
        return poped_ele;
    }
    int get_size(){
        return v.size() - front;
    }

    bool is_empty(){
        return get_size() == 0;
    }

    int peek(){
        return v[front];
    }

};

int main(){
    my_queue Q;
    Q.push(1);
    Q.push(2);
    Q.push(3);
    cout<<Q.pop()<<endl;
    cout<<Q.pop()<<endl;
    cout<<Q.pop()<<endl;
    cout<<Q.peek()<<endl;
    cout<<Q.get_size()<<endl;
    cout<<Q.is_empty()<<endl;


}