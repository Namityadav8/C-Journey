#include<iostream>
using namespace std; 
class data{
    int x,y,z;
    public:
    void take(){
        cout<<"Enter the data";
        cin>>x>>y>>z;
    }
    void dis(){
        cout<<"Entered data is "<<x<<endl<<y<<endl<<z<<endl;    
    }
    friend void operator-(data &d1);
};
void operator-(data &d2){
    d2.x=-d2.x;
    d2.y=-d2.y;
    d2.z=-d2.z;
}
int main(){
    data d1;
    d1.take();
    -d1;
    d1.dis();
} 