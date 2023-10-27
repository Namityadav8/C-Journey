// this code explains basically the order of the execution of the derived and parameterised class 
// first base class is called then derived then base param then derived param and then after destructor are called accordingly 
#include<iostream>
using namespace std; 
class A{
    int x;
    public:
    A(){
        cout<<"Calling base class default\n";
    }
    A(int a){
        x=a;
        cout<<"Calling base class parameterised\n";
    }
    ~A(){
        cout<<"Calling base class destructor\n";
    }
};
class B:public A{
    int i;
    public:
    B(){
        cout<<"Calling derived class default\n";
    }
    B(int p):A(p){
        i=p;
        cout<<"Calling derived class parameterised: "<<i<<endl;
    }
    ~B(){
        cout<<"Calling derived class destructor";    
    }
};
int main(){
    B obj1;
    B obj2(1);
} 