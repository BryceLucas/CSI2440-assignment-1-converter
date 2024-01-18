#include <stdio.h>

void printMenu() {
    printf("\nBryce's Metric Converter\n");
    printf("Choose conversion type:\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Grams to Ounces\n");
    printf("3. Kilometers to Miles\n");
    printf("4. Meters to Inches\n");
    printf("5. Celsius to Fahrenheit\n");
    printf("6. Liters to Gallons\n");
    printf("7. Exit\n");
    printf("Enter choice (1-7): ");
}

double kilogramsToPounds(double kg) {
    return kg * 2.20462;
}

double gramsToOunces(double g) {
    return g * 0.035274;
}

double kilometersToMiles(double km) {
    return km * 0.621371;
}

double metersToInches(double m) {
    return m * 39.3701;
}

double celsiusToFahrenheit(double c) {
    return (c * 9.0 / 5.0) + 32;
}

double litersToGallons(double l) {
    return l * 0.264172;
}

int main() {
    int choice;
    double value, result;

    do {
        printMenu();
        scanf("%d", &choice);

        if(choice < 1 || choice > 7) {
            printf("Invalid choice, please enter a number between 1 and 7.\n");
            while (getchar() != '\n'); // Clear the input buffer
            continue;
        }

        if(choice == 7) {
            break; // Exit the loop if choice is 7
        }

        printf("Enter value to convert: ");
        scanf("%lf", &value);

        switch (choice) {
            case 1:
                result = kilogramsToPounds(value);
                printf("%.2lf kg is %.2lf pounds.\n", value, result);
                break;
            case 2:
                result = gramsToOunces(value);
                printf("%.2lf g is %.2lf ounces.\n", value, result);
                break;
            case 3:
                result = kilometersToMiles(value);
                printf("%.2lf km is %.2lf miles.\n", value, result);
                break;
            case 4:
                result = metersToInches(value);
                printf("%.2lf m is %.2lf inches.\n", value, result);
                break;
            case 5:
                result = celsiusToFahrenheit(value);
                printf("%.2lf °C is %.2lf °F.\n", value, result);
                break;
            case 6:
                result = litersToGallons(value);
                printf("%.2lf liters is %.2lf gallons.\n", value, result);
                break;
            default:
                printf("Something went wrong, try again.\n");
                break;
        }
    } while (1);

    printf("Thank you for using My Metric Converter!\n");
    return 0;
}
