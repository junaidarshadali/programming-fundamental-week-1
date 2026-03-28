#include<iostream>
using namespace std;
main(){
    char s [50] ;
    cout<<"Enter A string :";
    cin>>s;
    int length=0;
    while(s[length]!='\0'){
        length++;
    }
    cout<<"Reverse String is : ";
    for(int i= length-1 ; i>=0 ; i--){
        cout <<s[i];
    }
}