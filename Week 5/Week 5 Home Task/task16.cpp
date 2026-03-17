#include<iostream>
using namespace std;
main(){
    for(int row=5 ; row>=1 ; row--){
        for(int col=5 ; col>=row ; col--){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}