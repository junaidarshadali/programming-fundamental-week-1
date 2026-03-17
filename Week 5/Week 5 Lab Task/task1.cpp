#include<iostream>
using namespace std;
main(){
int table, t1=24 , t2 = 50 , t3 = 29;
cout<<"Multiplication Table of 24 \n";
for (int x = 1 ; x<=10 ; x++){
table = t1 * x ;
cout<< t1 <<" * " << x << "=" << table <<endl;

}
cout<<"Multiplication Table of 50 \n";
for (int x = 1 ; x<=10 ; x++){
table = t2 * x ;
cout<< t2 <<" * " << x << "=" << table <<endl;

}
cout<<"Multiplication Table of 29 \n";
for (int x = 1 ; x<=10 ; x++){
table = t3 * x ;
cout<< t3 <<" * " << x << "=" << table <<endl;

}
}