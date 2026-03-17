#include<iostream>
using namespace std;
main(){
int a , b , hcf , lcm , mod;
mod = 1 ;
cout<<"Enter Fist Number : ";
cin>>a;
cout<<"Enter Second Number : ";
cin>>b;
while (mod<=a && mod<=b){
    if (a % mod ==0 && b % mod == 0)
{hcf=mod;}
mod++;
}

cout<<"HCF IS : " <<hcf <<endl;
lcm=(a*b)/hcf;
cout<<"LCM IS :"<<lcm;

}