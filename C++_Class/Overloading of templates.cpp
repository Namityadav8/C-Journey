#include<iostream>
using namespace std; 
template<class T>
// void display(T x){
//         cout<<"Template display:"<<x<<endl;
// }
// template<class T1, class T2,class T3>
// void display(T1 x , T2 y , T3 z){
//     cout<<"Template display:"<<x<<" "<<y<<" "<<z<<"\n";
// }
// void display(int x){
//     cout<<"Explicit display:"<<x<<endl;
// }   
// int main(){
//     display(100);
//     display(56.78);
//     display('a');
//     display(5.98,'b',89);
//     return 0;
// } 

class abc
{
    T a , b ;
    public:
    abc(T x , T y)
    {
        a=x;
        b=y;
    }
    T max1(){
        return (a>b?a:b);
    }
};
int main(){
    abc<int>obj(10,20);
    cout<<"\n max value is "<<obj.max1();
    abc<float>obj1(10.2,34.7);
    cout<<"\n max value is "<<obj1.max1();
    abc<char>obj2('A','a');
    cout<<"\n max value is"<<obj2.max1();
    return 0;
}