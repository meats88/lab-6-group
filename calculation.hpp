void calculateCalories(int &totalCalories, int carbs, int protein, int fat) {
    static int calcCount = 0; 
    calcCount++;
    int calsFromCarbs = carbs * 4;
    int calsFromProtein = protein * 4;
    int calsFromFat = fat * 9;
    totalCalories = calsFromCarbs + calsFromProtein + calsFromFat;
}

void calculateCalories(double &totalCalories, double carbs, double protein, double fat) {
   static int calcCount = 0;
    calcCount++;
    double calsFromCarbs = carbs * 4;
    double calsFromProtein = protein * 4;
    double calsFromFat = fat * 9;
    totalCalories = calsFromCarbs + calsFromProtein + calsFromFat;
}

void calculateCalories(int &totalCalories, int carbs, int protein, int fat, int alcohol) {
    static int calcCount = 0;
    calcCount++;

    int calsFromCarbs = carbs * 4;
    int calsFromProtein = protein * 4;
    int calsFromFat = fat * 9;
    int calsFromAlcohol = alcohol * 7;
    totalCalories = calsFromCarbs + calsFromProtein + calsFromFat + calsFromAlcohol;
}

void calculateCalories(double &totalCalories, double carbs, double protein, double fat, double alcohol) {
    static int calcCount = 0;
    calcCount++;
    
    double calsFromCarbs = carbs * 4;
    double calsFromProtein = protein * 4;
    double calsFromFat = fat * 9;
    double calsFromAlcohol = alcohol * 7;
    totalCalories = calsFromCarbs + calsFromProtein + calsFromFat + calsFromAlcohol;
}
