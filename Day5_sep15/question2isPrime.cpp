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
    int num;
    do
    {
        std::cout << "Enter an integer: ";
        std::cin >> num;
    } while (num < 0);

    bool isPrimeResult = isPrime(num);

    if (isPrimeResult)
    {
        std::cout << num << " is a prime number." << std::endl;
    }
    else
    {
        std::cout << num << " is not a prime number." << std::endl;
    }

    return 0;
}
