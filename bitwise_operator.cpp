#include<iostream>
using namespace std;
 int main(){
    int a=2;
    int b=5;
    cout<<"a&b= "<<(a&b)<<endl;
    cout<<"a|b= "<<(a|b)<<endl;
    cout<<"~a= "<<~a<<endl;
    cout<<"a^b= "<<(a^b)<<endl;

    cout<<(17>>1)<<endl;//right shift
    cout<<(17>>2)<<endl;
    cout<<(19<<1)<<endl;//left shift
    cout<<(21<<2)<<endl;
    int i=4;
    cout<<(i++)<<endl;
    //4,i=5
    cout<<(++i)<<endl;
    //6,i=6
    cout<<(i--)<<endl;
    //6,i=5
    cout<<(--i)<<endl;
    //4,i=4

 }