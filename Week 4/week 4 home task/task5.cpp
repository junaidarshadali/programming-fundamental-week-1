#include<iostream>
using namespace std;
main(){
    int hday;
    cout<<"Enter Holidays : ";
    cin>> hday;
    int wday=365-hday;
    int time=wday*63 + hday*127;
    int diff=30000-time;
    int hour=diff/60;
    int min=diff%60;
    if (diff>0){
        cout<<"Tom Sleeps Well \n";
        cout<<""<<hour<<" hours and "<<min<<" minutes less for play";
    }
    if(diff<0){
        diff=diff;
        cout<<"Tom run away \n";
        cout<<""<<hour<<" hours and "<<min<<" minutes for play";
    }

}