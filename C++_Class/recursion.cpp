#include<iostream>
using namespace std ;

int main(){
    int rec(int n);
    int n , fact ;
    cout<<"Enter the no."<<endl;
    cin>>n;
    fact = rec(n);
    cout<<"Factorial is "<<fact;
}

//afFs
int rec(int a){
    int b;
    if(a<=1){
        return 1 ; 
    }
    else{
        b=a*rec(a-1);
        return b;
    }
}