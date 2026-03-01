#include<iostream>
using namespace std;
main(){
int population , everyMonth , decade;
cout<<"Enter the current world population:";
cin>>population;
cout<<"Enter the number of birth per month :";
cin>>everyMonth;

decade= (12*everyMonth)*30 + population;
cout<<" population in three decades will be" <<decade;



}