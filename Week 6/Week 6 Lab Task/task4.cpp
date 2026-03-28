#include<iostream>
using namespace std;
main(){
    int size;
    cout<<"Enter The Number of elements : ";
    cin>>size;
    int a[100];
    cout<<"Enter "<<size<< " Numbers one per line:"<<endl;
    for(int i =0 ; i<size ; i++){
        cin>>a[i];
    }
    cout<<"Reverse String is : ";
    for(int b = size-1 ; b>=0 ; b--){
        cout<<a[b];
    }

}