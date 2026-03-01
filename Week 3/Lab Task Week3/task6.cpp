#include<iostream> 
using namespace std;
main(){
float megabytes;
cout<<"Enter the size in megabytes (MB):  ";
cin>>megabytes;
float converted;
converted= megabytes*1024*1024*8;
cout<< megabytes <<" MB is equivalent to "<<converted<<" bits";
}