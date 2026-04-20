#include <iostream>
using namespace std;
int Value1 = 10;
int value2 = 20;
int sum()
{
    Value1 = 40;
    return Value1 + value2;
}
main()
{
    int x = Value1;
    Value1 = 100;
    x = 20;
    value2 = sum();
    cout << Value1 << " " << value2;
}