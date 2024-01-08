/*
3. Find sum of all numbers between two positive integers N and M, including N and M.
For example:
N = 3
M = 7
Sum = 25 (3 + 4 + 5 + 6 + 7)
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
    } while (N < 0 || M < 0);

    start = N;
    while (start <= M)
    {
        sum += start;
        start++;
    }

    std::cout << "Sum of all numbers between two positive integers " << N << " and " << M << " is: " << sum << std::endl;

    return 0;
}