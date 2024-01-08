/*
5. Find the first digit in a positive integer.
For example:
Number = 32
First Digit = 3
*/

#include <iostream>

int main()
{
    int number;

    do
    {
        std::cout << "Enter a positive integer: ";
        std::cin >> number;
    } while (number < 0);

    int firstDigit = number;

    while (firstDigit >= 10)
    {
        firstDigit /= 10;
    }

    std::cout << "First Digit of " << number << " is: " << firstDigit << std::endl;

    return 0;
}
