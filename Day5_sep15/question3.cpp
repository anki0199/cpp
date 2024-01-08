#include <iostream>

int reverse(int num)
{
    int reversedNum = 0;

    while (num != 0)
    {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return reversedNum;
}

bool isPalindrome(int num)
{
    int reversed = reverse(num);

    return (num == reversed);
}

int main()
{
    int N;

    do
    {
        std::cout << "Enter a positive integer: ";
        std::cin >> N;
    } while (N < 0);

    if (N < 0)
    {
        std::cout << "Invalid input. Please enter a positive integer." << std::endl;
        return 1;
    }

    if (isPalindrome(N))
    {
        std::cout << N << " is a palindrome." << std::endl;
    }
    else
    {
        std::cout << N << " is not a palindrome." << std::endl;
    }

    return 0;
}
