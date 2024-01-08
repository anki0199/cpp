/*
9. Given a positive integer N, check if its palindrome or not. A palindrome number is a number that is same as its reverse.
For example:
Number = 32
Not a palindrome. (Reverse is 23 and not same as 32)
Number = 545
A palindrome. (Reverse is 545 and not same as 545)
*/
#include <iostream>

int main()
{
    int number;
    int reversedNumber = 0;
    int originalNum, remainder;

    do
    {
        std::cout << "Enter a positive integer: ";
        std::cin >> number;
    } while (number < 0);

    originalNum = number;

    while (number != 0)
    {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    if (reversedNumber == originalNum)
    {
        std::cout << originalNum << " is a palindrome. ";
    }
    else
    {
        std::cout << originalNum << " is not a palindrome. ";
    }

    return 0;
}