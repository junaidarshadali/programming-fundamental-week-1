#include<iostream>
using namespace std;
main(){
    int pin ;
    for(int p=0 ; p<3 ; p++){
        cout<<"Enter ATM PIN : ";
        cin>>pin;
        if(pin==1234){
            cout<<"Login Successful"<<endl;
            break;
        }
        else{
            cout<<"Wrong Pin"<<endl;
        }
        if(p==2){
            cout<<"Two Many Attempts Card Block \n";
        }
    }
    
    int choice;
    int  total , deposit , withdraw , exit ;
    total=1000;
    deposit = 0;
        withdraw= 0 ;
     
     
    for(int c = 0 ; c<5 ; c++){
        
        
    
        cout<<endl<<"----------ATM MENU----------"<<endl;

    cout<<"1. Check Balance"<<endl;

    cout<<"2. Deposit Balance"<<endl;

    cout<<"3. Withdraw Money"<<endl;

    cout<<"4. Exit"<<endl;

    cout<<"Enter Your Choice : ";

    cin>>choice;
        if (choice==1){
            cout<<"Your Current Balance is : " << total <<endl;
        }
        else if(choice==2){
            cout<<"Enter The Amount Of Deposit : ";
            cin>>deposit;
            total = total + deposit ;
        }
        else if(choice==3){
            cout<<"Enter The Amount Withdraw Money : " ;
            cin>>withdraw;
            total = total - withdraw ;
             if(total<withdraw){
                cout<<endl<<"Insufficent Balance "<<endl ;
             }
        }
        else if (choice==4){
            cout<<"\n Thank You for using ATM ";
        }
        else{
               cout<<"Invalid Choice ";
        }
    }
}