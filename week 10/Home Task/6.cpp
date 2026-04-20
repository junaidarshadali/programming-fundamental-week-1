#include <iostream>
using namespace std;

bool isStrong(int number)
{
    int originalNumber = number;
    int digitSum = 0;

    while (number > 0)
    {
        int digit = number % 10;
        int factorial = 1;

        for (int i = 1; i <= digit; i++)
        {
            factorial = factorial * i;
        }

        digitSum = digitSum + factorial;
        number = number / 10;
    }

    if (digitSum == originalNumber)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isStrong(num))
    {
        cout << "Strong Number";
    }
    else
    {
        cout << "Not a Strong Number";
    }

    return 0;
}