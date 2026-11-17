
#include <iostream>
#include <string>

int main()
{
    int playerCredits = 1000;
    std::string playerName;
    bool isPlaying = true;
    int menuChoice = 0;

    //Welcome Message
    std::cout << "Hello, before we begin, what is your nickname?" << std::endl;
    std::cin >> playerName;

    std::cout << "Welcome to Blackjack, " << playerName << "!" << std::endl;
    std::cout << "Your starting balance is " << playerCredits << " credits." << std::endl;

    //Main Menu Loop
    while (isPlaying)
    {
        std::cout << "\n=== BLACKJACK ===" << std::endl;
        std::cout << "Current Balance: " << playerCredits << " credits." << std::endl;
        std::cout << "\nStart the game by pressing '1' and Enter." << std::endl;
        std::cout << "Exit the game by pressing '2' and Enter." << std::endl;
        std::cout << "\nYour choice: ";
        std::cin >> menuChoice;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(100, '\n');

            std::cout << "Invalid input! Please enter a number." << std::endl;
            continue;
        }


        switch (menuChoice)
        {
        case 1:
            std::cout << "\nLet's play Blackjack!" << std::endl;
            break;

        case 2:
            std::cout << "\nThanks for playing, " << playerName << "!" << std::endl;
            isPlaying = false;
            break;

        default:
            std::cout << "\nInvalid option. Please enter 1 or 2." << std::endl;
            break;
        }
    }


    return 0;
}
