#include<iostream>
using namespace std;
main(){
    string c;
    float p;
    cout<<"Enter country name :";
    cin>>c;
    cout<<"Enter Ticket price in dollar :";
    cin>>p;
    if (c== "ireland" || c=="Ireland "|| c=="IRELAND"){
        p= p -p*0.10;
cout<<"Discounted price is : "<<p;
    }
    else{
        p=p-p*0.05;
        cout<<"Discounted price is : "<<p ;
    }
}