#include <iostream>
using namespace std;

float calculateSalary(float baseSalary, int performanceScore, int experienceYears)
{
    float bonusPercent;

    if (performanceScore >= 90)
    {
        bonusPercent = 20;
    }
    else if (performanceScore >= 75)
    {
        bonusPercent = 10;
    }
    else
    {
        bonusPercent = 5;
    }

    if (experienceYears >= 5)
    {
        bonusPercent = bonusPercent + 5;
    }

    float bonusAmount = (baseSalary * bonusPercent) / 100;
    float finalSalary = baseSalary + bonusAmount;

    return finalSalary;
}

int main()
{
    float baseSalary;
    int performanceScore, experienceYears;

    cout << "Enter base salary: ";
    cin >> baseSalary;

    cout << "Enter performance score: ";
    cin >> performanceScore;

    cout << "Enter years of experience: ";
    cin >> experienceYears;

    cout << "Final Salary: " << calculateSalary(baseSalary, performanceScore, experienceYears);

    return 0;
}