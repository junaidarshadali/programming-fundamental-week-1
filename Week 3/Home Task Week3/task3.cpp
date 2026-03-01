#include<iostream>
using namespace std;
main(){
int initial , final , acceleration , time;
cout<<"Enter initial velocity of the car : ";
cin>>initial;
cout<<"Enter acceleration of the car : ";
cin>>acceleration;
cout<<"Enter time in seconds : ";
cin>>time;
final= (acceleration*time)+initial;
cout<<"Final velocity of the car is :"<<final;
}