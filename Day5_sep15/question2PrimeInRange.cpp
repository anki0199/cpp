#include <iostream>

bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }

    if (num == 2)
    {
        return true;
    }

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int N, M;

    do
    {
        std::cout << "Enter two positive integers N and M: ";
        std::cin >> N >> M;
    } while (N <= 0 || M <= 0);

    if (N > M)
    {
        int temp = N;
        N = M;
        M = N;
    }

    std::cout << "Prime Numbers between " << N << " and " << M << ": ";

    for (int i = N; i <= M; i++)
    {
        if (isPrime(i))
        {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}
