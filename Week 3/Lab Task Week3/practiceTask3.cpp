#include <iostream>
using namespace std;

int main() {
    int minutes;
    int fps;
    int totalFrames;

    cout << "Enter number of minutes: ";
    cin >> minutes;

    cout << "Enter frames (FPS): ";
    cin >> fps;

   
    totalFrames = minutes * 60 * fps;

  
    cout << "Total number of frames: " << totalFrames << endl;

   
}