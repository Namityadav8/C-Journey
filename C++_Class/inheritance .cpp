#include<iostream>
using namespace std;
class namit{
  public:
  int age ;
  string name ;
  char gender ; 
} ;
int main(){
  namit details ;
  cin>>details.age ;
  cin>>details.name;
  cin>>details.gender;

  cout<<details.age<<endl;
  cout<<details.name<<endl;
  cout<<details.gender;
  return 0;
   
} 