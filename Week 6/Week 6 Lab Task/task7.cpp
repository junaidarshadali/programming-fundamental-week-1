#include<iostream>
using namespace std;
main(){
    float resistor[3];
    float RT=0;
    cout<<"Enter Three Resistor one Per Line : "<<endl;
    for(int i =0 ; i<3 ; i++){
        cin>>resistor[i];
        RT+=resistor[i];
    }
    cout<<"Total Resistance is : "<<RT;
}