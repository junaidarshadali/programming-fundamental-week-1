#include<iostream>
using namespace std;

int main()
{
    int n1 = 0, n2 = 1, next;
    int n ;

    cout<<"Enter the number of Fibonacci Series : ";
    cin >> n;

    if(n == 1){
        cout<< n1;
    }
    else if(n >= 2){
        cout<< n1 << ",";
        cout<< n2;

        for(int x = 1; x < n - 1; x = x + 1){
            next = n1 + n2;
            cout<< "," << next;
            n1 = n2;
            n2 = next;
        }
    }
}