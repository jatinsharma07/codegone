//counting
#include<iostream>
using namespace std;
int main(){
    /*int n,i=1;
    cout<<"enter the no.:"<<endl;
    cin>>n;
    while(i<=n){
        cout<<i<<" ";
        i++;
    }*/
    //sum of n no.
    /*int n,i=1,sum=0;
    cout<<"enter the no.:"<<endl;
    cin>>n;
    while(i<=n){
        sum=sum+i;

        i++;
       
    }
    cout<<"sum of no.:"<<sum<<" ";

    int n,i=2,sum=0;
    cin>>n;
    while(i<=n){
        sum=sum+i;
        i=i+2;
    }
    cout <<"sum of your even no. from 1 to "<<n<<" is :"<<sum<<endl;
    */
    //fahrenheit to celsius 
   /* float f,c;
    cout <<"enter the faharnheit temp.:";
    cin>>f;
    c= 0.5*(f-32);
    cout<<"temp. in celcius: "<<c<<endl;*/
    // prime no find
    int p,i=2;
    cout<<"enter the no.: ";
    cin>>p;
    while(i<p){
        if ( p%i!=0){
            cout<<"it is prime "<<endl;
        
        }
        else{
            cout<<"it is not prime "<<i<<endl;
            
        }
        i++;

    }

} 
