#include<iostream>
using namespace std; 
class uf{
    int a , b;
    int c;
    public:
    void getvalues(){
        cout<<"Values of a, b ,c ";
        cin>>a>>b>>c;
    }
    void show(){
        cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<endl;

    }
    void friend operator--(uf &x,int x1);
};
void operator--(uf &x,int y){
    x.a=x.a--;
    x.b=x.b--;
    x.c=x.c--;
}
int main(){
    uf x1;
    x1.getvalues();
    cout<<"Before Overloading\n";
    x1.show();
    cout<<"After Overloading \n";
    operator--(x1,1000);
    x1.show();
    return 0;
} 