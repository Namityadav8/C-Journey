#include<iostream>
using namespace std ;
// int global = 5;
int x = 0 ;
int main(){
//     int global =2;  // if we comment it and print global then it will take the global which is outside main func 
//     cout<<global << endl;

    int x = 10 ;
    cout<<"The value of global is :"<<::x;       //"to access global variable we use [::x] like this"
    cout<<"\n Value of local is :"<<x;
    return 0;

 }