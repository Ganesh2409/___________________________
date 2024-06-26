#include<bits/stdc++.h>
using namespace std;
class deeque{
    public:
    list<int> LL;
    deeque(){

    }

    void push_front(int val){
        LL.push_front(val);
    }
    void push_back(int val){
        LL.push_back(val);
    }
    int pop_front(){
        int  data = LL.front();
        LL.pop_front();
        return data;
    }
    int pop_back(){
        int data = LL.back();
        LL.pop_back();
        return data;
    }
    int  get_size(){
        return distance(LL.begin(),LL.end());
    }
    bool is_empty(){
        return get_size() == 0;
    }

};

int main(){
    deeque QLL;
    QLL.push_front(1);
    QLL.push_back(2);
    QLL.push_front(3);
    QLL.push_back(4);
    cout<<QLL.pop_front()<<endl;
    cout<<QLL.get_size()<<endl;
    cout<<QLL.is_empty()<<endl;
    QLL.pop_back();
    QLL.pop_front();
    QLL.pop_back();
    cout<<QLL.is_empty()<<endl;
}