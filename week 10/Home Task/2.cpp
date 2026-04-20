#include <iostream>
using namespace std;

void showPyramidVolume(double baseLength, double baseWidth, double pyramidHeight, string outputUnit);

int main()
{
    double baseLength, baseWidth, pyramidHeight;
    string outputUnit;

    cout << "Enter length, width and height (in meters): ";
    cin >> baseLength >> baseWidth >> pyramidHeight;

    cout << "Enter output unit: ";
    cin >> outputUnit;

    showPyramidVolume(baseLength, baseWidth, pyramidHeight, outputUnit);

    return 0;
}

void showPyramidVolume(double baseLength, double baseWidth, double pyramidHeight, string outputUnit)
{
    double result = (baseLength * baseWidth * pyramidHeight) / 3;

    if (outputUnit == "millimeters")
    {
        result = result * 1000000000;
    }
    else if (outputUnit == "kilometers")
    {
        result = result / 1000000000;
    }

    cout << "Volume = " << result << " cubic " << outputUnit << endl;
}