#include<iostream>
using namespace std;
int main(){
    cout<<"Enter number of Customer : ";
    int a;
    cin>>a;
    cin.ignore();
    cout<<"Enter the name of " <<a <<" Customer :"<<endl;
    string c[a];
    for(int i=0 ; i< a ; i++){
        getline(cin , c[i]);
    }
    char letter;
    cout<<"Enter A Letter To Check : ";
    cin >> letter;
    int count = 0 ;
    for(int i =0 ; i<a ; i++){
        if(c[i][0]==letter){
            count++;
        }
    }
    cout<<"Total name starting with " <<letter <<" is :"<<count;

}