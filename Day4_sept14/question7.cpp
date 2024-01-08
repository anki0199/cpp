/*
7. Find the sum of all digit of a integer (both positive and negative).
For example:
Number = -3245
Sum of digits = 14 (3 + 2 + 4 + 5)
Number = 12
Sum of digits = 3 (1 + 2)
*/

#include <iostream>

int main()
{
    int number, sum = 0;

    std::cout << "Enter an integer: ";
    std::cin >> number;

    int temp = number;
    // to convert negative number to positive
    if (temp < 0)
    {
        temp = -1 * temp;
    }

    while (temp > 0)
    {
        int digit = temp % 10;
        sum += digit;
        temp /= 10;
    }

    std::cout << "Sum of digits of " << number << " is: " << sum;

    return 0;
}