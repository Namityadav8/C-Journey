#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std; 

class employee{
    int id;
    float salary;
    public:
    void input(){
        cout<<"Enter id: \n";
        cin>>id;
        cout<<"Enter salary: \n";
        cin>>salary;
    }
    void display(){
        cout<<id<<" "<<salary;
    }
};


int main(){
    int n;
    cout<<"\n Enter number of employees"<<endl;
    cin>>n;
    employee *p=new employee[n];
    for(int i=0;i<n;i++){
        (p+1)->input();
    }
    for(int i=0;i<n;i++){
        (p+1)->display();
    }
    delete[]p;
    return 0;
} 