// You are using GCC
#include<iostream>
using namespace std;
struct student {
    int id;
    char name[18];
    void getdata(){
        cout<<"enter name and id :\n";
        cin>>name>>id;
        cout<<"name="<<name<<endl;
        cout<<"id="<<id<<endl;
    }
}s;
int main(){
    s.getdata();
    return 0;
//