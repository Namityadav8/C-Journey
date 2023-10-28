#include<iostream>
using namespace std;
class birthday{
    int date,month,year;
    public:
    birthday(int d,int m,int y){
        date=d;
        month =m;
        year =y;
        cout<<"birthday constructor"<<endl;
    }
    ~birthday(){
        cout<<"birthday destructor"<<endl;
    }
    void display(){
        cout<<date<<"/"<<month<<"/"<<year<<endl;
    }
};
class person{
    string name;
    birthday b;
    public:
    person(string n,int d,int m,int y):b(d,m,y){
        name=n;
        cout<<"person contructor"<<endl;
    }
    void show(){
        b.display();
        cout<<"name";
    }
    ~person(){
        cout<<"person destructor"<<endl;
    }
};
int main(){
    person ob("abc",12,10,2023);
    ob.show();
}