#include <iostream>
using namespace std;

int main() {
    int x=2;
int *y = &x;
cout<<y<<endl; // address should be printing here 
cout<<*(y)<<endl; // dereferencing the pointer so the value is printed 
    return 0;
}