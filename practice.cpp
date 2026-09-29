#include <iostream>

// Calclulator program that performs basic arithmetic operations

int main() {
    std::cout << "Welcome to the calculator program!" << std::endl;
    std::cout << "Please choose for menu options:" << std::endl;
    std::cout << "1. Additions" << std::endl;
    std::cout << "2. Substractions" << std::endl;
    std::cout << "3. Multiplications" << std::endl;
    std::cout << "4. Divisions" << std::endl;
    std::cout << "5. Exit" << std::endl;

    while (true) {
        int choice;
        std::cout << "Enter your choice (1-5): ";
        std::cin >> choice;

        if (choice == 5) {
            std::cout << "Exiting the program. Goodbye!" << std::endl;
            break;
        }

        double num1, num2;
        std::cout << "Enter two numbers: ";
        std::cin >> num1 >> num2;

        switch (choice) {
            case 1:
                std::cout << "Result: " << num1 + num2 << std::endl;
                break;
            case 2:
                std::cout << "Result: " << num1 - num2 << std::endl;
                break;
            case 3:
                std::cout << "Result: " << num1 * num2 << std::endl;
                break;
            case 4:
                if (num2 != 0) {
                    std::cout << "Result: " << num1 / num2 << std::endl;
                } else {
                    std::cout << "Error: Division by zero is not allowed." << std::endl;
                }
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }
    return 0;
}