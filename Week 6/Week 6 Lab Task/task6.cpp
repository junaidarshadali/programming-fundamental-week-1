#include<iostream>
using namespace std;
main(){
    cout<<"No of Elements : ";
    int a;
    cin>>a;
    int b[100];
    int c[1]={'0'};
    
    for(int i=0 ; i<a ;i++){
        cout<<"Enter Number "<<i+1<<"per line :";
        cin>>b[i];
         if(b[i]>c[1]){
            c[1]=b[i];
         }
    }
    cout<<"The Largest is :" <<c[1];
}