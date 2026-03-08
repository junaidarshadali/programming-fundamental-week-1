#include<iostream>
using namespace std;
main(){
    float rose , white ,tulip , total , discount ,full ;
    cout<<"No of Red Roses : ";
cin>>rose;
    cout<<"No of White : ";
cin>>white;
    cout<<"No of Tulips : ";
    cin>>tulip;
    rose = 2*rose;
    white=4.10*white;
    tulip=2.50*tulip;
total = rose + white + tulip;
full = total;
    if( total > 200){
        discount = total * 0.2;
        total = total - discount;
        cout<<"Original Price is : " << full <<endl;
        cout<<"Discounted  Price is : " << total;
    }
    else {
        cout<<"Original Price is : " << full;
    }
}