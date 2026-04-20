#include <iostream>
using namespace std;

void checkProjectHours(int requiredHours, int totalDays, int employeeCount);

int main()
{
    int requiredHours, totalDays, employeeCount;

    cout << "Enter required hours: ";
    cin >> requiredHours;

    cout << "Enter available days: ";
    cin >> totalDays;

    cout << "Enter number of employees: ";
    cin >> employeeCount;

    checkProjectHours(requiredHours, totalDays, employeeCount);

    return 0;
}

void checkProjectHours(int requiredHours, int totalDays, int employeeCount)
{
    double effectiveDays = totalDays * 0.9;
    int totalWorkingHours = effectiveDays * employeeCount * 10;

    int remainingHours = totalWorkingHours - requiredHours;

    if (remainingHours >= 0)
    {
        cout << "Yes! " << remainingHours << " hours left";
    }
    else
    {
        cout << "Not enough time! " << -remainingHours << " more hours needed";
    }
}