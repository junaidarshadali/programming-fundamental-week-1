#include<iostream>
using namespace std;

 main()
{
    int number;

    cout << "Enter a 4-digit number: ";
    cin >> number;

    int digit1 = number % 10;
    int digit2 = (number / 10) % 10;
    int digit3 = (number / 100) % 10;
    int digit4 = (number / 1000) % 10;

    int sum = digit1 + digit2 + digit3 + digit4;

    cout << "Sum of digits = " << sum;

}