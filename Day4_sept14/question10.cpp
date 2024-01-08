/*
10. Given a positive integer N, check if it is a perfect number or not.
Perfect number is a positive integer that is equal to the sum of its factors (excluding the number itself).
*/

#include <iostream>

int main()
{
    int N;

    do
    {
        std::cout << "Enter a positive integer: ";
        std::cin >> N;
    } while (N < 0);

    int sumOfFactors = 0;

    for (int i = 1; i <= N/2; ++i)
    {
        if (N % i == 0)
        {
            sumOfFactors += i;
        }
    }

    if (sumOfFactors == N)
    {
        std::cout << N << " is a perfect number.";
    }
    else
    {
        std::cout << N << " is not a perfect number.";
    }

    return 0;
}