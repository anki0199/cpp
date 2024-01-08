/*
1. Given a positive integer N, find all factors of N.
For example:
N = 12
Factors = 1 2 3 4 6 12
N = 5
Factors = 1 5
*/

#include<iostream>

int main()
{
    int N;

    do
    {
        std::cout << "Enter a positive integer: ";
        std::cin >> N;
    } while (N < 0);

    std::cout << "Factors of " << N << " are: ";

    for (int i = 1; i <= N / 2; ++i)
    {
        if (N % i == 0)
        {
            std::cout << i << " ";
        }
    }
    std::cout << N << std::endl;
    return 0;
}