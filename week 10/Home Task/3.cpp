#include <iostream>
using namespace std;

void calculateVehiclePrice(char vehicleCode, float vehicleCost);

int main()
{
    char vehicleCode;
    float vehicleCost;

    cout << "Enter vehicle code (M/E/S/V/T): ";
    cin >> vehicleCode;

    cout << "Enter vehicle price: ";
    cin >> vehicleCost;

    calculateVehiclePrice(vehicleCode, vehicleCost);

    return 0;
}

void calculateVehiclePrice(char vehicleCode, float vehicleCost)
{
    float percentage = 0;
    string vehicleName;

    if (vehicleCode == 'M')
    {
        percentage = 0.06;
        vehicleName = "Motorcycle";
    }
    else if (vehicleCode == 'E')
    {
        percentage = 0.08;
        vehicleName = "Electric Car";
    }
    else if (vehicleCode == 'S')
    {
        percentage = 0.10;
        vehicleName = "Sedan";
    }
    else if (vehicleCode == 'V')
    {
        percentage = 0.12;
        vehicleName = "Van";
    }
    else if (vehicleCode == 'T')
    {
        percentage = 0.15;
        vehicleName = "Truck";
    }

    float taxValue = vehicleCost * percentage;
    float totalCost = vehicleCost + taxValue;

    cout << "Final price of " << vehicleName
         << " after tax is $" << totalCost;
}