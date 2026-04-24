#include "input.hpp"
#include <iostream>
using namespace std;

void getInput(int &carbs, int &protein, int &fat) {
    cout << "Enter carbs (g): ";
    cin >> carbs;
    cout << "Enter protein (g): ";
    cin >> protein;
    cout << "Enter fat (g): ";
    cin >> fat;
}