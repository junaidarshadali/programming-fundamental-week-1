#include <iostream>
using namespace std ;
main(){
int n ;
int digit ;
int frequency = 0;
cout<<"Enter Number : " ;
cin>>n;
cout<<"Enter Digit : " ;
cin>>digit;
for( ; n>0 ; n= n/10){
    if(n%10==digit){
        frequency++;
    }
}
cout<<"frequency is " << frequency ;
}