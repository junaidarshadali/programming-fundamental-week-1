#include<iostream>
using namespace std;

int main() {
    char c;
    cout << "Enter any character in lower case or number: ";
    cin >> c;

    // Check vowels
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        cout << "It's a vowel";
    }
    // Check digits
    else if (c == '0' || c == '1' || c == '2' || c == '3' || c == '4' ||
             c == '5' || c == '6' || c == '7' || c == '8' || c == '9') {
        cout << "It's a number";
    }
    // Anything else is a consonant
    else {
        cout << "It's a consonant";
    }

    
}