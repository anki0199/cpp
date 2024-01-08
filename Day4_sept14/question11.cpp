/*
11. Given a positive integer N, check if it is an armstrong number or not.
*/

#include <iostream>

int main()
{
    int N, originalNumber, numDigits = 0, sum = 0;

    do
    {
        std::cout << "Enter a positive integer: ";
        std::cin >> N;
    } while (N < 0);

    originalNumber = N;

    while (N != 0)
    {
        N /= 10;
        numDigits++;
    }

    N = originalNumber;
    while (N > 0)
    {
        int digit = N % 10;
        int power = 1;

        for (int i = 0; i < numDigits; ++i)
        {
            power *= digit;
        }

        sum += power;
        N /= 10;
    }

    if (sum == originalNumber)
    {
        std::cout << originalNumber << " is an Armstrong number." << std::endl;
    }
    else
    {
        std::cout << originalNumber << " is not an Armstrong number." << std::endl;
    }

    return 0;
}
