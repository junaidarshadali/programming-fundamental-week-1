#include<iostream>
using namespace std;

int main()
{
    float i, p;
float c;

    cout<<"Enter imposter count : ";
    cin>>i;

    cout<<"Enter Player count : ";
    cin>>p;

    c = 100*(i/p);

    cout<<"Chances of being an imposter is "<<c<<"%";

   
}