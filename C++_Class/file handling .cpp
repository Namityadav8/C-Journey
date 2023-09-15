#include<iostream>
#include<fstream>
using namespace std ;
int main(){
    ofstream of("Result.txt");
    of<<"Hello";
    of.close();
    cout<<"data Saved\n";
}





