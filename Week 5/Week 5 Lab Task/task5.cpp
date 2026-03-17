#include<iostream>
using namespace std;
main(){
    string username  ;
    string password;
    string course ;
    string studentName = "";
    int age = 0 ;
    int choice ;
    for ( int up = 0 ; up < 3 ; up++){
        cout<<"Enter User Name : ";
        cin>>username;
        cout<<"Enter Password : ";
        cin>>password;
        if ( username=="admin" && password=="1234"){
            cout<<"Login Successful"<<endl;
            break;
        }
        else {
            cout<<"Wrong Login "<<endl;
        }
        if( up==2 && !(username=="admin" && password=="1234")){
            cout<<"To Many Attempts Program Ends "<<endl;
        }

 
    }
    for(int i=0 ; i<5 ; i++){
        cout<<endl <<"--------University Mangement System----------"<<endl;
        cout<<"1 Add Student"<<endl;
        cout<<"2 View Student"<<endl;
        cout<<"3 Add Course"<<endl;
        cout<<"4 Exit"<<endl;
         cout<<endl<<"Enter Choice : ";
         cin>>choice;

         if(choice == 1){
            cout<<"Enter Student Name : ";
            cin>>studentName;
            cout<<"Enter Their Age : ";
            cin>>age;

         }
        else if(choice == 2){
            cout<<"Student Name : "<<studentName <<endl;
            cout<<"Student Age : "<<age<<endl;
             if(studentName==""){
                cout<<"No Records Found" <<endl;
             }
       
    
        }
        else if(choice==3){
            cout<<"Course Name : ";
            cin>>course;
            cout<<endl<<"course added "<<course << "Successfully"<<endl; 
        }
        else if (choice==4){
            cout<<"Program Exit";
            break;
        }
        else{
            cout<<endl<<"Invalid Choice";
        }
    }
}