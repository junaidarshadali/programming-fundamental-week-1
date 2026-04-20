#include <iostream>
using namespace std;
 void sumOfDigits(int);


int main()
{
    int n1;

    cout << "Enter a number: ";
    cin >> n1;

    sumOfDigits(n1);
}
void sumOfDigits(int n)
{
    int sum = 0;

    while (n > 0)
    {
        int digit = n % 10; // get last digit
        sum = sum + digit;  // add to sum
        n = n / 10;         // remove last digit
    }

    if (sum % 2 == 0)
    {
        cout << "Number is Evenish ";
    }
    else
    {
        cout << "Number is oddish ";
    }
}