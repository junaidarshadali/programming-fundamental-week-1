#include<iostream>
using namespace std;
main(){
string myPass , userEnter ;
myPass= "junaidjutt";
cout<<"Enter the Pasword";
cin>>userEnter;
if( userEnter == myPass){
    cout<<"WoW , You Have Cracked The Code!";

}
else{
    cout<<"It is not That simple , Try Again";
}
}