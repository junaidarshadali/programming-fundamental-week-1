#include<iostream>
using namespace std;
main()
{
string name;
int weight , days;
cout<<"Enter the Name of the Person : " ;
cin>>name;
cout<<"Enter the Target Weight loose in kilogram : " ;
cin>>weight;
days=15*weight;
cout<< name<<" will need "<< days<<" days to lose " <<weight<<"kg of weight by following doctor suggestion";
}

