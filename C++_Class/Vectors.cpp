#include<iostream>
using namespace std; 
#include<vector>
int main(){
    vector<string> v1;
    v1.push_back("hello");
    v1.push_back("hi");
    for(vector<string>::iterator itr=v1.begin();itr!=v1.end();++itr){
        cout<<*itr;
    }
    return 0;
} 