#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    int sum=0;
    for( ; n>0 ; n=n/10){
        
    sum=sum+(n%10);
    
    }
    cout<<"sum is "<<sum;
}