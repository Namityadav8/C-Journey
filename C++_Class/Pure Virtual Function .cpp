#include<iostream>
using namespace std;

class teacher{
    public:
    virtual void proj()=0;
    void show(){
        cout<<"\nthis sample abstract class";
    }
};
class derived1:public teacher{
    public:
    void proj(){
        cout<<"C++";
    }
};
int main(){
    teacher *ptr;
    derived1 obj1;
    ptr=&obj1;
    ptr->proj();
    ptr->show();
}