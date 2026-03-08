#include<iostream>
using namespace std;

int main()
{
    int salary = 10000;
    int laptop = 50000;
    int advance = salary * 50 / 100; 
    int months;

    months = laptop / advance;

    if(months <= 6)
    {
        cout<<"Ali can buy the laptop"<<endl;
    }
    else
    {
        cout<<"Months required to buy laptop: "<<months<<endl;
    }

    
}