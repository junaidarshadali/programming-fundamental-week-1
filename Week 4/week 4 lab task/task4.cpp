#include<iostream>
using namespace std;
main(){
    int cost;
    cout<<"Enter the Cost of Your Dress : ";
    cin>>cost;
    if(cost < 1500){
        cout<<"Buy the Dress";
    }
    if(cost>1500){
        cout<<"Dont buy The Dress ";
    }
}