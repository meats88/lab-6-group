public static void calculateCalories(int &totalCalories, int carbs, int protein, int fat) {
    int calsFromCarbs = carbs * 4;
    int calsFromProtein = protein * 4;
    int calsFromFat = fat * 9;
    totalCalories = calsFromCarbs + calsFromProtein + calsFromFat;
}

public static void calculateCalories(double &totalCalories, double carbs, double protein, double fat) {
    double calsFromCarbs = carbs * 4;
    double calsFromProtein = protein * 4;
    double calsFromFat = fat * 9;
    totalCalories = calsFromCarbs + calsFromProtein + calsFromFat;
}

public static void calculateCalories(int &totalCalories, int carbs, int protein, int fat, int alcohol) {
    int calsFromCarbs = carbs * 4;
    int calsFromProtein = protein * 4;
    int calsFromFat = fat * 9;
    int calsFromAlcohol = alcohol * 7;
    totalCalories = calsFromCarbs + calsFromProtein + calsFromFat + calsFromAlcohol;
}

public static void calculateCalories(double &totalCalories, double carbs, double protein, double fat, double alcohol) {
    double calsFromCarbs = carbs * 4;
    double calsFromProtein = protein * 4;
    double calsFromFat = fat * 9;
    double calsFromAlcohol = alcohol * 7;
    totalCalories = calsFromCarbs + calsFromProtein + calsFromFat + calsFromAlcohol;
}
