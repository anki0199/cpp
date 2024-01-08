/*
12. Find the count of a digit in a given positive integer.
*/
#include <iostream>

int main()
{
    int number, digitToCount;

    do
    {
        std::cout << "Enter a positive integer: ";
        std::cin >> number;
    } while (number < 0);

    do
    {
        std::cout << "Enter the digit to count(0-9): ";
        std::cin >> digitToCount;
    } while (digitToCount < 0 || digitToCount > 9);

    int count = 0;
    int originalNumber = number;

    while (number > 0)
    {
        int digit = number % 10;
        if (digit == digitToCount)
        {
            count++;
        }
        number /= 10;
    }

    std::cout << "Count of digit " << digitToCount << " in " << originalNumber << " = " << count << std::endl;

    return 0;
}