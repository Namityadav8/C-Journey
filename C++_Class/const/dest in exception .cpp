#include<iostream>
using namespace std; 
class test{
    public:
    test(){
        cout<<"constructor of test"<<endl;
    }
    ~test(){
        cout<<"Destructor of test"<<endl;
    }
};
int main(){
    try{
        test t1;
        throw 10;
    }
    catch(int i){
        cout<<"Caught"<<i<<endl;
    }
} 