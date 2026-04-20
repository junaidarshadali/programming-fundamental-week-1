#include<iostream>
using namespace std;
int multi(int n){
 n*=5;
 return n;
}
main(){
int n1;
cout<<"Enter a Number : ";
cin>>n1;
multi(n1);
cout<<multi(n1);
}