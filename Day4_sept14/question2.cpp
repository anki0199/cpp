/*
2. Given a positive integer N, find its reverse.
For example:
N = 534
Reverse = 435
N = 5
Reverse = 5
*/
#include <iostream>

int main()
{
    int N, reversedNumber = 0, remainder;

    do
    {
        std::cout << "Enter a positive integer: ";
        std::cin >> N;
    } while (N < 0);

    while (N != 0)
    {
        remainder = N % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        N /= 10;
    }

    std::cout << "Reversed number: " << reversedNumber << std::endl;

    return 0;
}