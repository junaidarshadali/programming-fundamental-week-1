#include<iostream>
using namespace std;
main(){
    string name;
    cout<<"Please Enter Your Name";
    cin >> name ;
    if(name =="ali"){
      cout<<"Welcome " <<name <<endl;  
    }
    if(name !="ali"){
        cout<<"Try Again!";
    }
}