#include<iostream>
using namespace std;

int main()
{
    int totalBooks = 0;
    string libraryBooks[100];
    bool isBorrowed[100] = {false};
    string userInputName;

    while(true)
    {
        cout<<"\nLIBRARY MANAGEMENT SYSTEM\n";
        cout<<"1. ADD BOOKS\n";
        cout<<"2. VIEW BOOKS\n";
        cout<<"3. BORROW BOOKS\n";
        cout<<"4. RETURN BOOKS\n";
        cout<<"5. EXIT\n";

        int userChoice;
        cout<<"Enter the choice(1-5): ";
        cin >> userChoice;

        if(userChoice==1)
        {
            cout<<"How many books you want to enter: ";
            cin >> totalBooks;
            cin.ignore();

            cout<<"Enter names of "<<totalBooks<<" books:\n";
            for(int index=0 ; index < totalBooks ; index++)
            {
                getline(cin, libraryBooks[index]);
                isBorrowed[index] = false;
            }
        }
        
        else if(userChoice==2)
        {
            if(totalBooks==0)
            {
                cout<<"No books added yet\n";
                continue;
            }

            cout<<"Books in library:\n";
            for(int index=0; index<totalBooks; index++)
            {
                cout<<libraryBooks[index];

                if(isBorrowed[index])
                    cout<<" (Borrowed)";
                else
                    cout<<" (Available)";

                cout<<endl;
            }
        }

        else if(userChoice==3)
        {
            cout<<"Enter book name to borrow: ";
            cin.ignore();
            getline(cin, userInputName);

            bool isFound=false;

            for(int index=0 ; index< totalBooks ; index++)
            {
                if(libraryBooks[index]==userInputName)
                {
                    if(isBorrowed[index])
                    {
                        cout<<"Book already borrowed\n";
                    }
                    else
                    {
                        isBorrowed[index] = true;
                        cout<<"You borrowed "<<userInputName<<endl;
                    }
                    isFound=true;
                    break;
                }
            }

            if(!isFound)
            {
                cout<<"Book not found\n";
            }
        }

        else if(userChoice==4)
        {
            cout<<"Enter book name to return: ";
            cin.ignore();
            getline(cin, userInputName);

            bool isFound=false;

            for(int index=0 ; index< totalBooks ; index++)
            {
                if(libraryBooks[index]==userInputName)
                {
                    if(!isBorrowed[index])
                    {
                        cout<<"This book was not borrowed\n";
                    }
                    else
                    {
                        isBorrowed[index] = false;
                        cout<<"Book returned successfully\n";
                    }
                    isFound=true;
                    break;
                }
            }

            if(!isFound)
            {
                cout<<"Book not found\n";
            }
        }

        else if(userChoice==5)
        {
            cout<<"THANKS FOR VISITING OUR LIBRARY\n";
            break;
        }

        else 
        {
            cout<<"Invalid choice.\n";
        }
    }
}