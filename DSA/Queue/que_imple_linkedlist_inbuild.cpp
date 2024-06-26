#include<bits/stdc++.h>
using namespace std;
class my_queue{
    private:
    list<int>LL;
    public:
    my_queue(){

    }
    void push(int val){
        LL.push_back(val);

    }

    void pop(){
        LL.pop_front();
    }
    int get_size(){
        return distance(LL.begin(),LL.end());
    }
    int peek(){
        return LL.front();
    }
    bool is_empty(){
        return get_size() == 0;
    }
};

int main(){
    my_queue Q;
    Q.push(1);
    Q.push(2);
    Q.push(3);
    Q.push(24);
    cout<< Q.get_size()<<endl;
    cout<<Q.peek()<< endl;
    Q.pop();
    Q.pop();
    Q.pop();
    cout<<Q.is_empty()<<endl;
}