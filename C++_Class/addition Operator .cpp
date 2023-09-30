#include<iostream>
using namespace std;
class sum{
    public:
    int a,b;
    sum(){
        b=50;
    }
    void set_data(){
        cout<<"enter a:";
        cin>>a;
    }
    int operator+(sum s1){
        return (a+s1.b);
    }
};

int main(){
    int d ;
    sum s ,t;
    s.set_data();
    d=s+t;
    cout<<"SUM IS:"<<d;
   
}