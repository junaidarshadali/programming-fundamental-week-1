#include <iostream>
using namespace std;
main(){
int age ;
int weight;
cout<<"Age :";
cin>>age;
cout<<"Weight : ";
cin>>weight;
if(age >10){ 

   if (age ==15){
   cout<<"You are eligible";
}
 else if(age == 16){
    cout<<"You Are Perfect";
    if(weight > 20){
        cout<<"You are Perfectly Weight";
    }
 }
} 
else {
    cout<<"You are nice ";
}

}