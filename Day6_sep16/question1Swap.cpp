#include <iostream>

// swap two characters
void swap(char &a, char &b)
{
    char temp = a;
    a = b;
    b = temp;
}

//  swap two integers
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// swap two floating-point numbers
void swap(double &a, double &b)
{
    double temp = a;
    a = b;
    b = temp;
}

int main()
{
    char char1, char2;
    int num1 = 5, num2 = 10;
    double dbl1 = 3.14, dbl2 = 2.71;

    std::cout << " enter two characters: " << std::endl;
    std::cin >> char1 >> char2;
    std::cout << " enter two integers: " << std::endl;
    std::cin >> num1 >> num2;
    std::cout << " enter two double: " << std::endl;
    std::cin >> dbl1 >> dbl2;

    std::cout << "Before swapping:" << std::endl;
    std::cout << "char1: " << char1 << ", char2: " << char2 << std::endl;
    std::cout << "num1: " << num1 << ", num2: " << num2 << std::endl;
    std::cout << "dbl1: " << dbl1 << ", dbl2: " << dbl2 << std::endl;

    swap(num1, num2);
    swap(dbl1, dbl2);
    swap(char1, char2);

    std::cout << std::endl;

    std::cout << "After swapping:" << std::endl;
    std::cout << "char1: " << char1 << ", char2: " << char2 << std::endl;
    std::cout << "num1: " << num1 << ", num2: " << num2 << std::endl;
    std::cout << "dbl1: " << dbl1 << ", dbl2: " << dbl2 << std::endl;

    return 0;
}
