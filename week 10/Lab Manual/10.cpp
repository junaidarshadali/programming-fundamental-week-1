#include <iostream>
using namespace std;
void checkAlphabetCase(int check){
    char c =  check;
if( check>= 65 && check<=90){
    cout<<"You have Entered Capital : "<<c;
}
else{
    cout<<"You have Enterd Lowercase : "<<c;
}
}






main(){
    char a;
    cout << "Enter a Character :" ;
    cin>>a;
    int b = a;
    checkAlphabetCase(b);
   
}