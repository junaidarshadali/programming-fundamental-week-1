#include<iostream>
using namespace std;
main(){
    char arr[100];
    cout<<"Enter a Word :";
    cin.getline(arr , 100);
    for(int i=0 ; arr[i]!='\0';i++){
        cout<<"The Letter "<<arr[i] <<" Stored in position"<<i <<endl;
    }
}