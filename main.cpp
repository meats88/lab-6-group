#include "input.hpp"
#include "calculation.hpp"
#include <iostream>
#include "print.hpp"
using namespace std;

int main() {
    int carbs, protein, fat, totalCalories;

    getInput(carbs, protein, fat);
    calculateCalories(totalCalories, carbs, protein, fat);
    printResults(totalCalories);

    cout << "Total Calories: " << totalCalories << endl;
    return 0;
}
