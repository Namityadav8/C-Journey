#include<iostream>
#include<fstream>
using namespace std ;
int main(){
    char s[10];
    ifstream inf("Result.txt");
    inf>>s;
    inf.close();
    cout<<s;
}