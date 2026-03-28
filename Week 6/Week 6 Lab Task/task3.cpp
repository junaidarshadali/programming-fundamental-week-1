#include<iostream>
using namespace std;
main(){
    char s [50] ;
    cout<<"Enter A string :";
    cin>>s;
    char ascii;
   for(int i=0 ; s[i]!='\0';i++){
       ascii=s[i]+1;
       cout<<ascii;
   }
}