#include<iostream>
using namespace std;
int main(){
 int a;
 int firstA,secondA;
 
 int first[2];
 int second[100];
 
 cout<<"Enter the number of elements of first array( must be two ):";
 cin>>firstA;
 cout<<"Enter Two Elements of first Array One per Line :"<<endl;
 for(int i=0 ; i<2 ; i++){
cin>>first[i] ;

 }
 cout<<"Enter the Number of elements of second array :";
 cin>>secondA;
 a=secondA+2;
 cout<<"Enter"<<secondA <<" Elements of Second Array One per Line :"<<endl;
 for(int i=0 ; i<secondA ; i++){
    cin>>second[i] ;
 }
int r[a];
r[0]=first[0];
for(int c=0 ; c<secondA ; c++){
 r[c+1]=second[c];    
    
}
r[a-1]=first[1];
cout<<"Resultin Array is [";
for(int i=0 ; i< a ; i++){
    cout<< r[i];
    if(i< a-1){
        cout<<",";
    }
}
cout<<"]";
}