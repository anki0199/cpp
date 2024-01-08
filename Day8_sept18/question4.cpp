/*
4. In the given string, convert all lower case chanracters to upper case.
void ToUpper(char s[]);
*/
#include <iostream>

void ToUpper(char s[])
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 'a' + 'A';
        }
    }
}

int main()
{
    const int MAX_LENGTH = 100;
    char str1[MAX_LENGTH];

    std::cout << "Enter a string: ";
    std::cin.getline(str1, MAX_LENGTH);

    ToUpper(str1);
    std::cout << "Uppercase conversion: " << str1 << std::endl;

    return 0;
}
