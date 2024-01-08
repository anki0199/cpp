/*
1. Finish the implementation of BigInt class by overloading remaining relational operators to compare two BigInt objects.
   Also write a small program to demonstrate the use of BigInt class and overloaded relational operators.
*/
#include <iostream>

class BigInt
{
    int num;

public:
    BigInt() : num(0)
    {
    }
    BigInt(int n) : num(n)
    {
    }

    void Read()
    {
        std::cin >> num;
    }
    void Write()
    {
        std::cout << num;
    }

    bool operator==(BigInt obj2)
    {
        return (num == obj2.num);
    }

    bool operator<(BigInt obj2)
    {
        return (num < obj2.num);
    }

    bool operator>(BigInt obj2)
    {
        return (num > obj2.num);
    }

    bool operator<=(BigInt obj2)
    {
        return (num <= obj2.num);
    }

    bool operator>=(BigInt obj2)
    {
        return (num >= obj2.num);
    }
};

int main()
{
    BigInt i(10);
    BigInt j(20);

    if (i == j)
    {
        std::cout << "They are equal\n";
    }
    else
    {
        std::cout << "They are NOT equal\n";
    }

    if (i < j)
    {
        std::cout << "i is less than j\n";
    }
    else
    {
        std::cout << "i is NOT less than j\n";
    }

    if (i > j)
    {
        std::cout << "i is greater than j\n";
    }
    else
    {
        std::cout << "i is NOT greater than j\n";
    }

    if (i <= j)
    {
        std::cout << "i is less than or equal to j\n";
    }
    else
    {
        std::cout << "i is NOT less than or equal to j\n";
    }

    if (i >= j)
    {
        std::cout << "i is greater than or equal to j\n";
    }
    else
    {
        std::cout << "i is NOT greater than or equal to j\n";
    }

    return 0;
}
