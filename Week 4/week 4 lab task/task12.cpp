#include<iostream>
using namespace std ;
main(){
float bill ;
float discount ;
cout<<"Please Enter Your Bill";
cin>>bill;
if(bill<=5000){
discount=bill*0.05;
bill = bill - discount ;
cout<<"Your discounted Bill is" <<bill ;

}
else {
    discount=bill*0.1;
    bill = bill - discount ;
    cout<<"Your discounted Bill is" <<bill ;
}
}