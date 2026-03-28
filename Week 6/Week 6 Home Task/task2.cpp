#include<iostream>
using namespace std;
main(){
    cout<<"Enter the Number of Elements : ";
    int a;
    cin>>a;
    int count=0;
    cout<<"Enter "<<a<<" Numbers :"<<endl;
    int arr[a];
    for(int i =0 ; i<a ; i++){
        cin>> arr[i];
        if(arr[i]%2==0){
            count++;
        }

    }
   cout<<"Total Even Numbe is : " <<count;
}