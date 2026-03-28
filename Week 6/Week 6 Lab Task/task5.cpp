#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int a[100];  // array to store numbers
    int count = 0; // number of unique numbers stored

    for (int i = 0; i < n; i++) {
        int num;
        cout << "Enter number " << i + 1 << ": ";
        cin >> num;

        bool alreadyEntered = false;

        
        for (int j = 0; j < count; j++) {
            if (a[j] == num) {
                alreadyEntered = true;
                break;
            }
        }

        if (alreadyEntered) {
            cout << "Already Entered" << endl;
        } else {
            a[count] = num;
            count++;
        }
    }

    cout << "\nUnique numbers entered: ";
    for (int i = 0; i < count; i++) {
        cout << a[i] << " ";
    }

    return 0;
}