#include<iostream>
using namespace std ;

class point{
    int x,y;
    public:
    point(){
        x=0;y=0;
    }
    point(int i,int j){
        x=i;y=j;
    }

    point operator -(); //denotion of point operator 
    void display(){
        cout<<x<<"\t"<<y;

    }
};

point point::operator-(){
    x=-x;
    y=-y;
}
int main(){
    point o1(10,10);
    -o1;
    o1.display();
}