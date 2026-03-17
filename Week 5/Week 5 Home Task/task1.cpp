#include<iostream>
using namespace std;
main(){
    int t , answer ;
    cout<<"Enter a Number : ";
    cin>>t;
    for (int m = 1 ; m <= 10 ; m++){
      answer= t * m ;
      cout<<t<<" * "<< m <<" = "<<answer<<endl;
    }
}