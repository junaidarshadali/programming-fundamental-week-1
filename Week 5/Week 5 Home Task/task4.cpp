#include<iostream>
using namespace std;
main(){
int n , d , f=0;
cout<<"Enter Number : ";
cin>>n;
cout<<"Enter the Digit to Check : ";
cin>>d;
for( ; n>0 ;n=n/10){
    if(n%10==d){
f++;
    }

}
cout<<"Frequency is :"<<f;
}