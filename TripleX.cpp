#include <iostream>

int main() 
{ 
    // Intro Story and Player Goal
    std::cout << "Your wife working at the cable company is trying to send you messages through your TV";
    std::cout << std::endl;
    std::cout << "You need to find the correct channels to continue...";

    // Declare 3 number code
    const int a = 4;
    const int b = 8;
    const int c = 18;

    const int sum = a + b + c;
    const int product = a * b * c;

    // Print sum and product to the terminal
    std::cout << std::endl;
    std::cout << sum << std::endl;
    std::cout << product << std::endl;

    return 0;
}