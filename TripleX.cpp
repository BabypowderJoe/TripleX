#include <iostream>

int main() 
{ 
    // Intro Story and Player Goal
    std::cout << "Your wife working at the cable company is trying to send you a message through your TV";
    std::cout << std::endl;
    std::cout << "You need to find the correct channel to continue..." << std::endl;

    // Declare 3 number code
    const int CodeA = 4;
    const int CodeB = 8;
    const int CodeC = 18;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print CodeSum and CodeProduct to the terminal
    std::cout << std::endl;
    std::cout << "There are 3 numbers in the channel" << std::endl;
    std::cout << "The numbers add up to: " << CodeSum << std::endl;
    std::cout << "The numbers multiply to give: " << CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct= GuessA * GuessB * GuessC;

    return 0;
}