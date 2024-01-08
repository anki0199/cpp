/*
5. In the given string, convert all upper case chanracters to lower case.
void ToLower(char s[]);
*/
#include <iostream>

void ToLower(char s[])
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 'a' - 'A';
        }
    }
}

int main()
{
    const int MAX_LENGTH = 100;
    char str1[MAX_LENGTH];

    std::cout << "Enter a string: ";
    std::cin.getline(str1, MAX_LENGTH);

    ToLower(str1);
    std::cout << "Uppercase conversion: " << str1 << std::endl;

    return 0;
}
