#include <iostream>
using namespace std;

int main() {
    int speed;
    
    cout << "Enter the speed of the car (in km/h): ";
    cin >> speed;

    // Check speed using if-else
    if (speed > 100) {
        cout << "Halt....YOU WILL BE CHALLANED!!!" << endl;
    } else {
        cout << "Perfect! You’re going good." << endl;
    }

    
}