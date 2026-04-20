#include<iostream>
using namespace std;
void sumN(int number1 , int number2);
main(){
    int number1 , number2;
    cout<<"Enter Number 01";
     cin>>number1;
     cout<<"Enter Number 02 ";
     cin>>number2;
     sumN(number1, number2);
     return 0;

}
void sumN(int number1, int number2){
cout<<"Sum : "<<number1 + number2 ;
}