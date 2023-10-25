#include<iostream>
using namespace std; 
class A{
    public:
    A(){
        cout<<"\n Calling default Base class constructor";
    }
    ~A(){
        cout<<"\n Calling default base class destructor";
    }
};
class B:public A{
    public:
    B(){
        cout<<"\n Calling default derived class constructor";
    }
    ~B(){
        cout<<"\n Calling default derived class destructor";

    }
};
int main(){
    B obj1;
    return 0;
} 