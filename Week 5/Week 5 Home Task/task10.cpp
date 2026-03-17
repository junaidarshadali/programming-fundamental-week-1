#include<iostream>
using namespace std;
int main(){
    cout<<"----------Restaurant Management System----------\n";
    cout<<"1. View Order Menu\n";
    cout<<"2. Place Order\n";
    cout<<"3. View Order Status\n";
    cout<<"4. Generate Bill\n";
    cout<<"5. Contact staff\n";
    cout<<"6. Exit \n";
    int choice ;
    cout<<"Please Enter Your Choice (1-6)\n";
    cin>>choice;
    if(choice==1){
        cout<<"You Selected : View Order Menu.\n";
    }
    else if(choice==2){
        cout<<"You Selected : Place Order.\n";
    }
    else if(choice==3){
        cout<<"You Selected : View Order.\n";
    }
    else if(choice==4){
        cout<<"You Selected : Generate Bill.\n";
    }
    else if(choice==5){
        cout<<"You Selected : Contact Staff.\n";
    }
    else if(choice==6){
        cout<<"Exiting Restaurant Management System..Thank You!\n";
    }
}