#include<iostream>
using namespace std;
main(){
    int sum =0;
    cout<<"Enter the Number of Elements : ";
    int a;
    cin>>a;
    cout<<"Enter "<<a<<" Numbers :"<<endl;
    int arr[a];
    for(int i =0 ; i<a ; i++){
        cin>> arr[i];
        sum+=arr[i];

    }
    cout<<"Sum is : " <<sum;
}