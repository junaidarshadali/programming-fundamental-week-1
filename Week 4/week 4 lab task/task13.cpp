#include<iostream>
using namespace std;
main(){
float firstN , secondN , answer ;
char op ;
cout<<"Enter first number";
cin>>firstN;
cout<<"Enter Operator";
cin>> op;
cout <<"Enter Second number";
cin >> secondN;
if ( op == '+'){
answer = firstN - secondN;
cout << firstN <<"-" << secondN <<"=" << answer ;

}
if (op == '*'){
    answer = firstN / secondN;
cout << firstN <<"/" << secondN <<"=" << answer;
}

if (op == '/'){
    answer = firstN * secondN;
cout << firstN <<"*" << secondN <<"=" << answer;
}
if (op == '-'){
    answer = firstN + secondN;
cout << firstN <<"+" << secondN <<"=" << answer;
}

}