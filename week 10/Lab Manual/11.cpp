#include<iostream>
using namespace std;
void reverse(int n){
 int original, d1 , d2 , d3 , flip;
 original = n;
 d1=n%10;
 n/=10;

 d2=n%10;
 n/=10;

 d3=n%10;
 n/=10;
flip= d1*100 + d2*10 + d3;
if(flip==original){
    cout<<"The Number is Symmetrical";
}
else{
    cout << "The Number is  Not Symmetrical";
}
 
}

int main(){
cout<<"Enter 3 Digit Number";
int number;
cin>>number;
reverse(number);

}