#include <iostream>
using namespace std;

float calculateBalance(float amount, int years)
{
    float interestRate;

    if (amount < 10000)
    {
        interestRate = 5;
    }
    else if (amount <= 50000)
    {
        interestRate = 7;
    }
    else
    {
        interestRate = 10;
    }

    if (years >= 3)
    {
        interestRate = interestRate + 2;
    }

    float interest = (amount * interestRate) / 100;
    float updatedBalance = amount + interest;

    return updatedBalance;
}

int main()
{
    float balance;
    int years;

    cout << "Enter balance: ";
    cin >> balance;

    cout << "Enter number of years: ";
    cin >> years;

    cout << "Updated Balance: " << calculateBalance(balance, years);

    return 0;
}