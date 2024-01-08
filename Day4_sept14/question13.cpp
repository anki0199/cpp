#include <iostream>

int main()
{
    int N;

    do
    {
        std::cout << "Enter a positive integer: ";
        std::cin >> N;
    } while (N < 0);

    int originalNumber = N;
    int reversedNumber = 0;

    while (N > 0)
    {
        int digit = N % 10;
        reversedNumber = reversedNumber * 10 + digit;
        N /= 10;
    }

    while (reversedNumber > 0)
    {
        int digit = reversedNumber % 10;
        switch (digit)
        {
        case 0:
            std::cout << "Zero ";
            break;
        case 1:
            std::cout << "One ";
            break;
        case 2:
            std::cout << "Two ";
            break;
        case 3:
            std::cout << "Three ";
            break;
        case 4:
            std::cout << "Four ";
            break;
        case 5:
            std::cout << "Five ";
            break;
        case 6:
            std::cout << "Six ";
            break;
        case 7:
            std::cout << "Seven ";
            break;
        case 8:
            std::cout << "Eight ";
            break;
        case 9:
            std::cout << "Nine ";
            break;
        default:
            break;
        }
        reversedNumber /= 10;
    }

  

    return 0;
}