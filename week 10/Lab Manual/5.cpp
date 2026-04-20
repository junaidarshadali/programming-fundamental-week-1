#include<iostream>
#include<cmath>
using namespace std;
main(){
    cout<<"Enter the base Number : ";
    int n1;
    cin>>n1;
    cout<<"Enter the exponent : ";
    int n2;
    cin>>n2;
    cout<< n1 <<" raised to power " << n2 <<" is " << pow(n1 , n2);
}