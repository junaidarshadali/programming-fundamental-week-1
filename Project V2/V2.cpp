#include <iostream>
#include <conio.h>
using namespace std;
// Global Variable-------------------------------------------------------------------------- :

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

//----------------------------------------------------------------------------

// SHOW Menu
void viewMenuFood()
{
    system("cls");
    cout << "\n===== FOOD MENU =====\n";
    for (int i = 0; i < foodCount; i++)
        cout << i + 1 << ".\t" << food[i] << "\tRs." << foodPrice[i] << "\n";
}
void viewMenuDrink(bool isFound)
{
    cout << "\n===== DRINKS MENU =====\n";
    for (int i = 0; i < drinkCount; i++)
        cout << i + 1 << ".\t" << drink[i] << "\tRs." << drinkPrice[i] << "\n";
    if (isFound)
    {
        cout << "\nPress any key to go back...";
        getch();
    }
}

// For Orders : ----------------------------------------------------------------

void orderItems(string items[], int prices[], int count, string customerName)
{
    while (true)
    {
        system("cls");

        // Show Menu
        cout << "\n===== MENU =====\n";
        for (int i = 0; i < count; i++)
        {
            cout << i + 1 << ".\t" << items[i] << "\tRs." << prices[i] << "\n";
        }

        cout << "\nEnter item number (0 to go back): ";
        int choose;
        cin >> choose;

        if (choose == 0)
            break;

        if (choose < 1 || choose > count)
        {
            cout << "Invalid choice! Press any key...";
            getch();
            continue;
        }

        cout << "Enter quantity: ";
        int qty;
        cin >> qty;

        orderedCustomer[orderCount] = customerName;
        orderedNames[orderCount] = items[choose - 1];
        orderedPrices[orderCount] = prices[choose - 1];
        orderedQuantity[orderCount] = qty;
        orderCount++;

        cout << "\nAdded: " << items[choose - 1] << " x" << qty
             << " = Rs." << prices[choose - 1] * qty;

        cout << "\nPress any key to continue...";
        getch();
    }
}
// for Total BILL

void totalBill(bool isShow)
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
    if (isShow)
    {
        cout << "====================================================\n";
        cout << "\t\t\tTOTAL:\tRs." << totalAmount << "\n";
        cout << "====================================================\n";
    }
    cout << "\nPress any key to go back...";
    getch();
}

//---------------------------------------------------
// for add food and Drink
//---------------------------------------------------

void addFood(string addItem[], int addPrice[], int &index)
{
    cin.ignore();

    cout << "Enter Item Name : ";
    getline(cin, addItem[index]);

    cout << "Enter Price : ";
    cin >> addPrice[index];

    index++;

    cout << "\nItem Added Successfully!";
    getch();
}

//---------------------------Update Price -----------------------------

void update(int choose, string items[], int prices[], int count)
{
    if (choose >= 1 && choose <= count)
    {
        cout << "Current Price of " << items[choose - 1]
             << " is Rs." << prices[choose - 1] << endl;

        cout << "Enter New Price: ";
        cin >> prices[choose - 1];

        cout << "\nPrice Updated Successfully!";
    }
    else
    {
        cout << "\nInvalid Item Number!";
    }

    getch();
}
void totalOrders()
{
    system("cls");
    cout << "All Orders : " << endl;
    cout << "Customer Name---  ----Order Name   ---Order Price\n";
    for (int i = 0; i < orderCount; i++)
    {
        cout << orderedCustomer[i] << "\t" << orderedNames[i] << "\t" << orderedPrices[i] * orderedQuantity[i] << "\n";
    }
    getch();
}
//---------------------------------------

void remove(int remove, int &count, string item[], int price[])
{
    if (remove >= 1 && remove <= count)
    {
        // Shift items left
        for (int i = remove - 1; i < count - 1; i++)
        {
            item[i] = item[i + 1];
            price[i] = price[i + 1];
        }

        count--; // reduce count

        cout << "\nItem removed successfully!";
    }
    else
    {
        cout << "\nInvalid choice!";
    }
}
int main()
{

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
            getline(cin, customerName);

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
                    viewMenuFood();
                    viewMenuDrink(true);
                }

                //  Order Food
                else if (userOption == 2)
                {
                    orderItems(food, foodPrice, foodCount, customerName);
                }
                // Order Drinks :

                else if (userOption == 3)
                {
                    orderItems(drink, drinkPrice, drinkCount, customerName);
                }

                // 4. View Current Order
                else if (userOption == 4)
                {

                    totalBill(false);
                }

                // For total bill :
                else if (userOption == 5)
                {
                    totalBill(true);
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
                            addFood(food, foodPrice, foodCount);
                        }
                        else if (adminOption == 2)
                        {
                            addFood(drink, drinkPrice, drinkCount);
                        }
                        else if (adminOption == 3)
                        {

                            viewMenuFood();

                            cout
                                << "\nEnter food number to update price: ";
                            int choose;
                            cin >> choose;
                            update(choose, food, foodPrice, foodCount);
                        }
                        else if (adminOption == 4)
                        {
                            system("cls");
                            viewMenuDrink(false);

                            int chooseDrink;
                            cout << "Enter Drink Number to Update Price: ";
                            cin >> chooseDrink;
                            update(chooseDrink, drink, drinkPrice, drinkCount);
                        }
                        else if (adminOption == 5)
                        {
                            // --------------------------------
                            // --------------total Number of Orders---------------
                            //----------------------------------------------------
                            totalOrders();
                        }
                        else if (adminOption == 6)
                        {
                            system("cls");
                            viewMenuFood();
                            cout << "\nEnter food number to remove: ";
                            int removeIndex;
                            cin >> removeIndex;
                            remove(removeIndex, foodCount, food, foodPrice);
                        }
                        else if (adminOption == 7)
                        {
                            cout << "Exit Admin Panel ";
                            getch();
                            isFound = true;
                            break;
                        }
                    }
                }
            }
        }
    }

    return 0;
}