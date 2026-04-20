#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int number1, number2;
    cout << "Enter Number 1 : ";
    cin >> number1;
    cout << "Enter Number 2: ";
    cin >> number2;
    cout << "Smallest Number is " << min(number1, number2);
    return 0;
}
