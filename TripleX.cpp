#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty)
{
    // Intro Story and Player Goal
    std::cout << "\n~Level~ " << Difficulty;
    std::cout << "\nYour wife stuck at work is trying to send you messsages through your TV\n";
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

    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

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
        if (Difficulty == 1)
        {
            std::cout << "\nYou found the message! It says... \"Stop watching TV and do the dishes\" :(\n";
            std::cout << "Looks like your wife might have another message for you, keep surfing!\n";
        }
        else if (Difficulty == 2)
        {
            std::cout << "\nYou found the message! It says... \"Stop watching TV and do the laundry\" :(\n";
            std::cout << "You're not out of the woods yet, one more message for you, keep surfing!\n";
        }
        else
        {
            std::cout << "\nYou found the message! It says... \"Stop watching TV and mow the grass\" :(\n";
        }
        
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
    srand(time(NULL)); // Create new random sequence based on time of day

    int LevelDifficutly = 1;
    const int MaxDifficulty = 3;

    while (LevelDifficutly <= MaxDifficulty) // Loop game until all levels are completed
    {
        bool bLevelComplete = PlayGame(LevelDifficutly);
        std::cin.clear(); // Clears any errors
        std::cin.ignore(); // Discards the buffer

        if (bLevelComplete)
        {
            ++LevelDifficutly;
        }
    }

    std::cout << "\nYou found all the messages from your wife! Better get started on that Honey Do list!\n";
    return 0;
}