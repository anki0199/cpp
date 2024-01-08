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

int main()
{
    int num;

    std::cout << "Enter an integer: ";
    std::cin >> num;

    int reversed = reverse(num);

    std::cout << "Reversed number: " << reversed << std::endl;

    return 0;
}
