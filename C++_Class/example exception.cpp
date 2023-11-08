#include<iostream>
using namespace std; 
void divide(double x , double y){
    cout<<"Inside Function";
    try{
        if(y==0)
            throw y;
        else 
            cout<<"Division="<<x/y;
    }
    catch(double){
        cout<<"Caught double inside function";
        throw;
    }
    cout<<"End of the function ";
}
int main(){
    cout<<"Inside main";
    try{
        divide(10.5,2.0);
        divide(20.0,0.0);
    }
    catch(double){
        cout<<"Caught double inside main";
    }
    cout<<"End of main";
    return 0;
} 