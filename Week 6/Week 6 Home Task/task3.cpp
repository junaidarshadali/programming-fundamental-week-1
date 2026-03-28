#include<iostream>
using namespace std;
main(){
    
    cout<<"Enter the Number of Elements : ";
    int a;
    cin>>a;
    cout<<"Enter "<<a<<" Numbers :"<<endl;
    int arr[a];
    for(int i =0 ; i<a ; i++){
        cin>> arr[i];
        }
        int largest=arr[0];
    int smallest=arr[0];
    for(int i=0 ; i<a ;i++){
          if(arr[i]>=largest){
            largest=arr[i];
     
        }        
        if(arr[i]<=smallest){
            smallest=arr[i];
        }
    }
         cout<<"Largest is :"<<largest<<endl;
    cout<<"Smallest is :"<<smallest<<endl;
    }
   