#include <iostream>

void PrintIntroduction(int Difficulty)
{
    // Intro Story and Player Goal
    std::cout << "\n~Level~ " << Difficulty;
    std::cout << "\nYour wife stuck at work is trying to send you a message through your TV\n";
    std::cout << "You need to find the correct channel to continue...\n";

    std::cout << " ___________\n";
    std::cout << "|  .----.  o|\n";
    std::cout << "| |      | o|\n";
    std::cout << "| |      | o|\n";
    std::cout << "|__`----`___|\n";
    std::cout << " `         `\n\n";
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);

    // Declare 3 number code
    const int CodeA = 1;
    const int CodeB = 2;
    const int CodeC = 3;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print CodeSum and CodeProduct to the terminal
    std::cout << "There are 3 numbers in the channel";
    std::cout << "\nThe numbers add up to: " << CodeSum;
    std::cout << "\nThe numbers multiply to give: " << CodeProduct << std::endl;

    // Store player guess
    std::cout << std::endl;
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct= GuessA * GuessB * GuessC;

    // Check if the player's guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\nYou found the message! It says... \"Stop watching TV and do the dishes\" :(\n";
        return true;
    }
    else
    {
        std::cout << "\nWrong channel, keep surfing!\n";
        return false;
    }
}

int main() 
{ 
    int LevelDifficutly = 1;

    while(true)
    {
        bool bLevelComplete = PlayGame(LevelDifficutly);
        std::cin.clear(); // Clears any errors
        std::cin.ignore(); // Discards the buffer

        if (bLevelComplete)
        {
            ++LevelDifficutly;
        }
        
    }
 
    return 0;
}