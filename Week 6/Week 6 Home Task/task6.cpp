#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    cin.ignore(); // Important! Clears leftover newline before using getline

    string names[n];

    // Input names
    cout << "Enter " << n << " names:\n";
    for(int i = 0; i < n; i++){
        getline(cin, names[i]);
    }

    // Sorting names alphabetically using nested loops
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(names[i] > names[j]){   // Compare full strings
                // Swap names[i] and names[j]
                string temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }

    // Display sorted names
    cout << "\nNames in alphabetical order:\n";
    for(int i = 0; i < n; i++){
        cout << names[i] << endl;
    }

    return 0;
}