#include <iostream>
using namespace std;
int main(){

    float speed;
    cout << "Enter the speed:"  ;
    cin >>speed;
    if(speed<=10){
    cout << "slow" ;
}   else if(speed <= 50){
    cout << "average";}
    else if(speed<=150){
        cout << "fast" ;}
    else{
        cout << "ultra fast";}
    
    

    }