#include<iostream>
using namespace std; 
template<class T >
T square(T sum){
    return (num* sum);
}
int main(){
    int num1=3;
    cout<<"\n Square of "<<num1<<"="<<square<int>(num1)<<endl;
    float num2= 5.6;
    cout<<"Square of"<<num2<<"="<<square<float>(num2)<<endl;
    double num3 = 123.456;
    cout<<"Square of"<<num3<<"="<<square<double>(num3);
    return 0;
} 