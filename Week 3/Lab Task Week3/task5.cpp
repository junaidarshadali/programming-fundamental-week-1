#include<iostream>
using namespace std;
main(){
float aggregate;
cout<<"Enter Your Name: ";
string name;
cin>>name;
cout<<"Enter Your Matric Marks Out of 1100: ";
float marks1;
cin>>marks1;
cout<<"Enter your inter part 1 marks: ";
float marks2;
cin>>marks2;
cout<<"Enter your Ecat Score: ";
float marks3;
cin>>marks3;
aggregate=(marks1*100 / 1100)*0.1 + (marks2*100 / 550)*0.4 + ( marks3*100 / 400 )*0.5; 
cout<<"Aggregate score of"<<name<<" is:"<<aggregate<<"%";
}

