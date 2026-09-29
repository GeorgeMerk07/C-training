#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed random number generator once at the start
    srand(static_cast<unsigned int>(time(0)));

    std::cout << "Welcome to Hidden Game" << std::endl;
    
    while (true) {
        std::cout << "\nEnter the difficulty level" << std::endl;
        std::cout << "1. Level easy!" << std::endl;
        std::cout << "2. Medium level" << std::endl;
        std::cout << "3. Hard level" << std::endl;
        std::cout << "4. To quit the game" << std::endl;

        int difficultyChoice;
        std::cout << "Enter the number from above menu: ";
        std::cin >> difficultyChoice;

        if (difficultyChoice == 4) {
            std::cout << "Thanks for playing!" << std::endl;
            break;
        }

        // Generating the secret number (1 to 100)
        int secretNumber = 1 + (rand() % 100);
        int playerChoice;

        // Difficulty level: Easy 
        if (difficultyChoice == 1) {
            std::cout << "You have 10 choices for finding the secret number (1-100)" << std::endl;
            
            bool won = false;
            for (int i = 1; i <= 10; i++) {
                std::cout << "Enter your number: ";
                std::cin >> playerChoice;

                if (playerChoice == secretNumber) {
                    std::cout << "Good job, you found the hidden number! " 
                              << playerChoice << " is the secret number." << std::endl;
                    won = true;
                    break;
                } else {
                    std::cout << "Nope, " << playerChoice << " is not the right number." << std::endl;
                    if (playerChoice > secretNumber) {
                        std::cout << "The secret number is smaller." << std::endl;
                    } else {
                        std::cout << "The secret number is greater." << std::endl;
                    }
                }
            }
            
            if (!won) {
                std::cout << "You ran out of choices! The secret number was: " << secretNumber << std::endl;
            }
        }
        // Difficulty level: Medium 
        else if (difficultyChoice == 2) {
            std::cout << "You have 7 choices for finding the secret number (1-100)" << std::endl;
            int choicesLeft = 7;
            bool won = false;
            
            for (int i = 1; i <= 7; i++) {
                std::cout << "Enter the number: ";
                std::cin >> playerChoice;
                
                if (playerChoice == secretNumber) {
                    std::cout << "Well played, you won! " << playerChoice << " is the secret number." << std::endl;
                    won = true;
                    break;
                } else {
                    std::cout << "Nope, " << playerChoice << " is not the right number." << std::endl;
                    if (playerChoice > secretNumber) {
                        std::cout << "You are looking too high." << std::endl;
                    } else {
                        std::cout << "You are looking too low." << std::endl;
                    }
                    choicesLeft--;
                    std::cout << choicesLeft << " choices left." << std::endl;
                }
            }
            
            if (!won) {
                std::cout << "You ran out of choices! The secret number was: " << secretNumber << std::endl;
            }
        }
        // Difficulty level: Hard
        else if (difficultyChoice == 3) {
            std::cout << "You have only 5 attempts to guess correctly (1-100)" << std::endl;
            int choicesLeft = 5;
            bool won = false;
            
            for (int i = 1; i <= 5; i++) {
                std::cout << "Enter your lucky guess: ";
                std::cin >> playerChoice;
                
                if (playerChoice == secretNumber) {
                    std::cout << "You are very good, you won! " << playerChoice << " is the secret number." << std::endl;
                    won = true;
                    break;
                } else {
                    std::cout << "Nope, try again." << std::endl;
                    if (playerChoice > secretNumber) {
                        std::cout << "You are looking too high." << std::endl;
                    } else {
                        std::cout << "You are looking too low." << std::endl;
                    }
                    choicesLeft--;
                    std::cout << choicesLeft << " choices left." << std::endl;
                }
            }
            
            if (!won) {
                std::cout << "You couldn't find it, sorry! The secret number was: " << secretNumber << std::endl;
            }
        }
        else {
            std::cout << "Wrong choice, please enter a valid option." << std::endl;
        }
    }
    
    return 0;
}