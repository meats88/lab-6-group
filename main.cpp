#include "input.hpp"
#include "calculation.hpp"
#include <iostream>
#include "print.hpp"
using namespace std;

int main() {

    
    int totalCalories = 0;;
    int carbs, protein, fat, alcohol;
    
    getInput(carbs, protein, fat, alcohol);

    calculateCalories(totalCalories, carbs, protein, fat, alcohol);
    printResults(totalCalories);


    
    return 0;
}
