#include <iostream>
using namespace std;

main() {
    int twoPointers, threePointers;
    int totalPoints;


    cout << "Enter number of 2-pointers scored: ";
    cin >> twoPointers;

    cout << "Enter number of 3-pointers scored: ";
    cin >> threePointers;


    totalPoints = (twoPointers * 2) + (threePointers * 3);

    
    cout << "Total points scored: " << totalPoints << endl;

    
}