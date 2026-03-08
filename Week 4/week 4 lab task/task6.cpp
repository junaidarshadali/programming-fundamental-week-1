#include<iostream>
using namespace std;
main(){
    char going;
    cout<<"Are Your Friend Going? (Press Y for Yes and N for No)";
    cin>>going;
 
    if (going == 'Y'){
        cout<<"You are also going";
    }
    else{
        cout<<"You are not Going";
    }


}