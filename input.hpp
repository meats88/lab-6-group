
#include <iostream>
using namespace std;

void getInput(int &carbs, int &protein, int &fat, int &alcohol) {
    do {
    cout << "Enter carbs (g): ";
    cin >> carbs;
    cout << "Enter protein (g): ";
    cin >> protein;
    cout << "Enter fat (g): ";
    cin >> fat;
    cout << "Enter alcohol (g): ";
    cin >> alcohol;
    if (carbs < 0 || protein < 0 || fat < 0 || alcohol < 0) {
        cout << "no negative macros." << endl;
    }
    } while (carbs < 0 || protein < 0 || fat < 0 || alcohol < 0);
}