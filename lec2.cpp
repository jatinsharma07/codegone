#include<iostream>
using namespace std;
int main(){
    //greater then less then program
    /*int a,b;
    cin>>a>>b;
    if(a>b){
        cout<<"a is greater then b"<<endl;

    }
    else if(b>a){
        cout<<"b is greater then a"<<endl;

    }
    else{
        cout<<"both are equal"<<endl;
    }*/




    /*ASCII table
    int a;
    a= cin.get();
    cout<<"value of a:"<<a<<endl;*/
    /* to find positive no. or negative no.
    int a;
    cout<<"enter the no.:"<<endl;
    cin>>a;
   
    if (a>0){
        cout<<"no.is positive"<<endl;
    }
    else if (a<0){
        cout<<"no. is negative"<<endl;

    }
    else{
        cout<<"no. is zero"<<endl;
    }*/
    char ch;
    cout<<"enter the charcter:"<<endl;
    cin>>ch;
    if('a'<=ch && ch<='z'){
        cout<<"this is lower case"<<endl;
    }
    else if('A'<=ch && ch<='Z'){
        cout<<"this is upper case"<<endl;
    }
    else{
        cout<<"this is numeric"<<endl;
    }


}