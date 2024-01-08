/*
8. Find the product of all digit of a positive integer.
For example:
Number = 312
Sum of digits = 6 (3 x 1 x 2)
*/

#include <iostream>

using namespace std;

int main()
{
    int number, product = 1;

    do
    {
        std::cout << "Enter a positive integer: ";
        std::cin >> number;
    } while (number < 0);

    int temp = number;

    while (temp > 0)
    {
        int digit = temp % 10;
        product *= digit;
        temp /= 10;
    }

    cout << "Product of digits of " << number << " is: " << product << endl;

    return 0;
}