#include<iostream>
using namespace std; 
class MyClass {     
  public:            
    int myNum;        
    string myString;  
};

int main() {
  MyClass myObj;  

    cin>>myObj.myNum ;
    cin>>myObj.myString ;
    cout<<myObj.myString<<endl;
    cout<<myObj.myNum<<endl;

  
  return 0;
}