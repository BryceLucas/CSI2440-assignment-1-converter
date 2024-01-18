#include <iostream>
#include <string>
#include <limits>

void printMenu() {
    std::cout << "\nBryce's Metric Converter\n";
    std::cout << "Choose conversion type:\n";
    std::cout << "1. Kilograms to Pounds\n";
    std::cout << "2. Grams to Ounces\n";
    std::cout << "3. Kilometers to Miles\n";
    std::cout << "4. Meters to Inches\n";
    std::cout << "5. Exit\n";
    std::cout << "Enter choice (1-5): ";
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

void clearInputStream() {
    // Clear the input stream buffer
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main() {
    int choice;
    double value, result;

    do {
        printMenu();
        std::cin >> choice;

        if(std::cin.fail() || choice < 1 || choice > 5) {
            std::cout << "Invalid choice, please enter a number between 1 and 5.\n";
            clearInputStream();
            continue;
        }

        if(choice == 5) {
            break; // Exit the loop if choice is 5
        }

        std::cout << "Enter value to convert: ";
        std::cin >> value;

        if(std::cin.fail()) {
            std::cout << "Invalid input, please enter a numerical value.\n";
            clearInputStream();
            continue;
        }

        switch (choice) {
            case 1:
                result = kilogramsToPounds(value);
                std::cout << value << " kg is " << result << " pounds.\n";
                break;
            case 2:
                result = gramsToOunces(value);
                std::cout << value << " g is " << result << " ounces.\n";
                break;
            case 3:
                result = kilometersToMiles(value);
                std::cout << value << " km is " << result << " miles.\n";
                break;
            case 4:
                result = metersToInches(value);
                std::cout << value << " m is " << result << " inches.\n";
                break;
            default:
                std::cout << "Something went wrong, try again.\n";
                break;
        }
    } while (true);

    std::cout << "Thank you for using my Metric Converter!\n";
    return 0;
}
