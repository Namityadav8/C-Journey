#include<iostream>
using namespace std ;
int global = 5;
int main(){
    int global =2;  // if we comment it and print global then it will take the global which is outside main func 
    cout<<global << endl;
}