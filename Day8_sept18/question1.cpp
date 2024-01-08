/*
1. Given a string, return its length.
int Strlen(char s[]);
*/
#include <iostream>

int Strlen(char s[])
{
    int length = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}

int main()
{
    std::cout << "program to calculate string length" << std::endl;
    char str[100];
    std::cout << "enter a string" << std::endl;
    std::cin.getline(str, 100);

    std::cout << "Length of string is: " << Strlen(str) << std::endl;

    return 0;
}
