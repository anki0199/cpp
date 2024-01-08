/*
Find the sum of all digit of a positive integer.
For example:
Number = 3245
Sum of digits = 14 (3 + 2 + 4 + 5)
*/

#include <iostream>

int main()
{
    int number;
    int sum = 0;

    do
    {
        std::cout << "Enter a positive integer: ";
        std::cin >> number;
    } while (number < 0);

    int originalNumber = number;

    while (number > 0)
    {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }

    std::cout << "Sum of digits in " << originalNumber << " is: " << sum << std::endl;

    return 0;
}