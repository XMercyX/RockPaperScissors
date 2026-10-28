#include <iostream>
#include <cstdlib>
#include <vector>

int main()
{
    std::string userInput;

    std::cout << "Pick 'rock', 'paper', or 'scissors': "; std::cin >> userInput;

    std::vector<std::string> options {"rock", "paper", "scissors"};
    std::string computerChoice = options[rand() % 4];

    std::cout << userInput << " - " << computerChoice << '\n';

    std::string result;

    if (userInput != computerChoice) {
        result = "NOT A TIE";
        if (userInput == "rock") {if (computerChoice == "paper") {result = "User wins!";} else {result = "Computer wins!";}}
        if (userInput == "paper") {if (computerChoice == "scissors") {result = "User wins!";} else {result = "Computer wins!";}}
        if (userInput == "scissors") {if (computerChoice == "rock") {result = "User wins!";} else {result = "Computer wins!";}}
    } else {
        result = "TIE";
    }

    std::cout << result;

    return 0;
}