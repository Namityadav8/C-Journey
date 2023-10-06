#include<iostream>
using namespace std; 
class student{
    private:
    int rollno;
    float fee;
    public:
    student(int a ,float m){
        rollno = a;
        fee = m;
    }
    operator int(){
        return (rollno);
    }
    operator float(){
        return (fee);
    }
};
void main(){
    int j;
    float f;
    student st(5,4200.50);
    j=st;
    f=st;
    cout<<"\n value of j: "<<"\n";
    cout<<"\n value of f: "<<"\n";

    //  getch();
} 