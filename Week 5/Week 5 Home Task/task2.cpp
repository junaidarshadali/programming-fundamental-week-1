#include<iostream>
using namespace std;

main(){
    int n;
    cout<<"Enter the length of the Fibonacci series: ";
    cin>>n;

    int a = 0, b = 1, c;

    for(int i = 1; i <= n; i++){
        if(i == 1){
            cout<<a<<"";
        }
        else if(i == 2){
            cout<<","<<b;
        }
        else{
            c = a + b;
            cout<<","<<c;
            a = b;
            b = c;
        }
    }
}