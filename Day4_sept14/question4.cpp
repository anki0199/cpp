/*
4. Find prime numbers between two positive integers N and M, including N and M.
For example:
N = 3
M = 10
Prime Numbers = 3 5 7
*/

#include <iostream>

int main()
{
    int N, M;
    int start;
    int sum = 0;

    do
    {
        std::cout << "Enter a positive integer start of range: ";
        std::cin >> N;
        std::cout << "Enter a positive integer end of range: ";
        std::cin >> M;
    } while (N < 1 || M < 2 || N > M);

    std::cout << "Prime Numbers between " << N << " and " << M << " are: ";
    for (int i = N; i <= M; ++i)
    {
        if (i == 1)
        {
            continue;
        }

        bool isPrime = true;

        for (int j = 2; j * j <= i; ++j)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            std::cout << i << " ";
        }
    }

    return 0;
}