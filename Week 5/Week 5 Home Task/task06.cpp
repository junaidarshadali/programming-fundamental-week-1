#include<iostream>
using namespace std;

int main(){
    int a , b , hcf = 1 , lcm , mod;

    mod = 1 ;

    cout<<"Enter First Number : ";
    cin>>a;

    cout<<"Enter Second Number : ";
    cin>>b;

    while (mod <= a && mod <= b){
        if (a % mod == 0 && b % mod == 0){
            hcf = mod;
        }
        mod++;  
    }

    cout<<"HCF IS : " << hcf << endl;

    lcm = (a * b) / hcf;

    cout<<"LCM IS : " << lcm;

}