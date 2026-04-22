#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    // For Food
    string food[100] = {"Chicken Burger", "Beef Burger", "Pizza",
                        "Pepperoni Pizza", "Chicken Shawarma", "Beef Shawarma",
                        "Fries", "Garlic Bread"};
    int foodPrice[100] = {300, 400, 600, 700, 800, 350, 450, 100};
    int foodCount = 8;
    // For Drinks
    string drink[100] = {"7up", "Coca-Cola", "Pepsi"};
    int drinkPrice[100] = {100, 120, 120};
    int drinkCount = 3;
    // For storing The vlues
    string orderedNames[200];
    int orderedPrices[200];
    int orderedQuantity[200];
    string orderedCustomer[200];
    int orderCount = 0;
    // Total bill Showing in : 
    string customerName = "";
    float totalAmount = 0;

    while (true)
    {
        system("cls");
        
        cout << "Restaurant Order Management System\n\n";
        
        cout << "1. User Panel\n";
        cout << "2. Admin Panel\n";
        cout << "3. Exit\n";
        cout << "Choose Option: ";
        int mainOption;
        cin >> mainOption;

        if (mainOption == 1)
        {
            system("cls");
            cin.ignore();
            cout << "Enter Your Name: ";
            getline(cin , customerName);
            

            
            while (true)
            {
                system("cls");
                cout << "----------------------------------------------------\n";
                cout << "                   User Panel                       \n";
                cout << "-----------------------------------------------------\n";
                cout << "1. View Full Menu\n";
                cout << "2. Order Food\n";
                cout << "3. Order Drinks\n";
                cout << "4. View Current Order\n";
                cout << "5. Total Bill\n";
                cout << "6. Exit\n";
                cout << "Choose Option: ";
                int userOption;
                cin >> userOption;

                // View Full Menu
                if (userOption == 1)
                {
                    system("cls");
                    cout << "\n===== FOOD MENU =====\n";
                    for (int i = 0; i < foodCount; i++)
                        cout << i + 1 << ".\t" << food[i] << "\tRs." << foodPrice[i] << "\n";

                    cout << "\n===== DRINKS MENU =====\n";
                    for (int i = 0; i < drinkCount; i++)
                        cout << i + 1 << ".\t" << drink[i] << "\tRs." << drinkPrice[i] << "\n";

                    cout << "\nPress any key to go back...";
                    getch();
                }

                //  Order Food 
                else if (userOption == 2)
                {
                    while (true)
                    {
                        system("cls");
                        cout << "\n=FOOD MENU=\n";
                        for (int i = 0; i < foodCount; i++)
                            cout << i + 1 << ".\t" << food[i] << "\tRs." << foodPrice[i] << "\n";

                        cout << "\nEnter item number (0 to go back): ";
                        int choose;
                        cin >> choose;
                        if (choose == 0)
                        {
                            break;
                        }

                        if (choose < 1 || choose > foodCount)
                        {
                            cout << "Invalid choice! Press any key...";
                            getch();
                            continue;
                        }

                        cout << "Enter quantity: ";
                        int quantity;
                        cin >> quantity;
                        orderedCustomer[orderCount] = customerName;
                        orderedNames[orderCount] = food[choose - 1];
                        orderedPrices[orderCount] = foodPrice[choose - 1];
                        orderedQuantity[orderCount] = quantity;
                        orderCount++;

                        cout << "\nAdded: " << food[choose - 1] << " x" << quantity
                             << " = Rs." << foodPrice[choose - 1] * quantity;
                        cout << "\nPress any key to continue...";
                        getch();
                    }
                }
                // Order Drinks : 

                else if (userOption == 3)
                {
                    while (true)
                    {
                        system("cls");
                        cout << "\n===== DRINKS MENU =====\n";
                        for (int i = 0; i < drinkCount; i++)
                            cout << i + 1 << ".\t" << drink[i] << "\tRs." << drinkPrice[i] << "\n";

                        cout << "\nEnter drink number (0 to go back): ";
                        int choose;
                        cin >> choose;
                        if(choose==0){
                            break;
                        }

                        if (choose < 1 || choose > drinkCount)
                        {
                            cout << "Invalid choice! Press any key...";
                            getch();
                            continue;
                        }

                        cout << "Enter quantity: ";
                        int qty;
                        cin >> qty;
                        orderedCustomer[orderCount] = customerName;
                        orderedNames[orderCount] = drink[choose - 1];
                        orderedPrices[orderCount] = drinkPrice[choose - 1];
                        orderedQuantity[orderCount] = qty;
                        orderCount++;

                        cout << "\nAdded: " << drink[choose - 1] << " x" << qty
                             << " = Rs." << drinkPrice[choose - 1] * qty;
                        cout << "\nPress any key to continue...";
                        getch();
                    }
                }

                // 4. View Current Order
                else if  (userOption == 4)
                {
                    system("cls");
                    cout << "\n";
                    cout << "Current Order for: " << customerName << "\n";
                    cout << "\n";

                    if (orderCount == 0)
                    {
                        cout << "No items ordered yet!\n";
                    }
                    else
                    {
                        cout << "No.\tItem\t\t\tQuantity\tSubtotal\n";
                        cout << "----------------------------------------------------\n";
                        for (int i = 0; i < orderCount; i++)
                        {
                            if (orderedCustomer[i] == customerName)
                            {
                                cout << i + 1 << ".\t" << orderedNames[i] << "\t\t"
                                     << orderedQuantity[i] << "\tRs."
                                     << orderedPrices[i] * orderedQuantity[i] << "\n";
                            }
                        }
                    }

                    cout << "\nPress any key to go back...";
                    getch();
                }

                // For total bill : 
                else if (userOption == 5)
                {
                    system("cls");
                    totalAmount = 0;

                    cout << "====================================================\n";
                    cout << "            BILL for: " << customerName << "\n";
                    cout << "====================================================\n";
                    cout << "No \tItem\t\t\tQuantity\tSubtotal\n";
                    cout << "----------------------------------------------------\n";

                    for (int i = 0; i < orderCount; i++)
                    {
                        if (orderedCustomer[i] == customerName)
                        {
                            int subtotal = orderedPrices[i] * orderedQuantity[i];
                            totalAmount += subtotal;
                            cout << i + 1 << ".\t" << orderedNames[i] << "\t\t"
                                 << orderedQuantity[i] << "\tRs." << subtotal << "\n";
                        }
                    }

                    cout << "====================================================\n";
                    cout << "\t\t\tTOTAL:\tRs." << totalAmount << "\n";
                    cout << "====================================================\n";

                    cout << "\nPress any key to go back...";
                    getch();
                }

                // Exits
                else if (userOption == 6)
                {
                    cout << "\nThank you, " << customerName << "\n";
                    getch();
                    break;
                }
            }
        }
        else if (mainOption == 2)
        {
            bool isFound = false;
            for (int i = 0; i < 3 && isFound == false; i++)
            {
                system("cls");
                cout << "Admin Panel : login attempt " << 1 + i;
                cout << "\nEnter User Name : ";
                string userName;
                cin >> userName;
                cout << "Enter Password";
                int passWord;
                cin >> passWord;
                if (userName == "admin" && passWord == 123)
                {
                    cout << "Login Successful\n";
                    while (true)
                    {
                        system("cls");
                        cout << "------------------------------------------------------\n";
                        cout << "                   Admin Panel                       \n";
                        cout << "------------------------------------------------------\n";
                        cout << "1. Add New Food Items\n";
                        cout << "2. Add New Drink\n";
                        cout << "3. Update Food Price \n";
                        cout << "4. Update Drink Price \n";
                        cout << "5. Total Number of Orders \n";
                        cout << "6. Remove Food Items\n";
                        cout << "7. Exit\n";
                        int adminOption;
                        cout << "Choose an Option";
                        cin >> adminOption;

                        if (adminOption == 1)
                        {
                            if (adminOption == 1)
                            {
                                cin.ignore();

                                cout << "Enter Item Name : ";
                                getline(cin, food[foodCount]);

                                cout << "Enter Price : ";
                                cin >> foodPrice[foodCount];

                                foodCount++;

                                cout << "\nItem Added Successfully!";
                                getch();
                            }
                        }
                        else if (adminOption == 2)
                        {
                            cin.ignore();

                            cout << "Enter item Name : ";
                            getline(cin, drink[drinkCount]);

                            cout << "Enter Price : ";
                            cin >> drinkPrice[drinkCount];

                            foodCount++;

                            cout << "\nItem added Successfully!";
                            getch();
                        }
                        else if (adminOption == 3)
                        {

                            system("cls");

                            cout << "----------- Food Menu -----------\n";
                            for (int i = 0; i < foodCount; i++)
                            {
                                cout << i + 1 << ". " << food[i] << "\tRs." << foodPrice[i] << endl;
                            }

                            cout << "\nEnter food number to update price: ";
                            int chooseFood;
                            cin >> chooseFood;
                            if (chooseFood >= 1 && chooseFood <= foodCount)
                            {
                                cout << "Current Price of " << food[chooseFood - 1]
                                     << " is Rs." << foodPrice[chooseFood - 1] << endl;

                                cout << "Enter New Price: ";
                                cin >> foodPrice[chooseFood - 1];

                                cout << "\nPrice Updated Successfully!";
                            }
                            else
                            {
                                cout << "\nInvalid Food Number!";
                            }

                            getch();
                        }
                        else if (adminOption == 4)
                        {

                            system("cls");

                            cout << "----------- Drink Menu -----------\n";
                            for (int i = 0; i < drinkCount; i++)
                            {
                                cout << i + 1 << ". " << drink[i] << "\tRs." << drinkPrice[i] << endl;
                            }

                            int chooseDrink;
                            cout << "Enter Drink Number to Update Price: ";
                            cin >> chooseDrink;
                            
                            if (chooseDrink >= 1 && chooseDrink <= drinkCount)
                            {
                                cout << "Current Price of " << drink[chooseDrink - 1]
                                     << " is Rs." << drinkPrice[chooseDrink - 1] << endl;

                                cout << "Enter New Price: ";
                                cin >> drinkPrice[chooseDrink - 1];

                                cout << "\nPrice Updated Successfully!";
                            }
                            else
                            {
                                cout << "\nInvalid Drink Number!";
                            }

                            getch();
                        }
                        else if (adminOption == 5)
                        {
                            // --------------------------------
                            // --------------total Number of Orders---------------
                            //----------------------------------------------------
                            system("cls");
                            cout << "All Orders : " << endl;
                            cout << "Customer Name---  ----Order Name   ---Order Price\n";
                            for (int i = 0; i < orderCount; i++)
                            {
                                cout << orderedCustomer[i] << "\t" << orderedNames[i] << "\t" << orderedPrices[i]*orderedQuantity[i] << "\n";
                            }
                            getch();
                        }
                        else if (adminOption == 6)
                        {
                            system("cls");

                            cout << "----------- Food Menu -----------\n";
                            for (int i = 0; i < foodCount; i++)
                            {
                                cout << i + 1 << ". " << food[i] << "\tRs." << foodPrice[i] << endl;
                            }

                            cout << "\nEnter food number to remove: ";
                            int removeIndex;
                            cin >> removeIndex;

                            if (removeIndex >= 1 && removeIndex <= foodCount)
                            {
                                // Shift items left
                                for (int i = removeIndex - 1; i < foodCount - 1; i++)
                                {
                                    food[i] = food[i + 1];
                                    foodPrice[i] = foodPrice[i + 1];
                                }

                                foodCount--; // reduce count

                                cout << "\nItem removed successfully!";
                            }
                            else
                            {
                                cout << "\nInvalid choice!";
                            }

                            getch();
                        }
                        else if(adminOption==7){
                            cout<<"Exit Admin Panel ";
                            getch();
                            isFound=true;
                            break;
                        }
                    }
                }
            }
        }
    }

    return 0;
}