/*
3. Compare the two strings and return true if they are same else return false.
bool Compare(char s1[], char s2[]);
*/
#include <iostream>

bool Compare(char s1[], char s2[])
{
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            return false;
        }
        i++;
    }
    return s1[i] == s2[i];
}

int main()
{
    const int MAX_LENGTH = 100;
    char str1[MAX_LENGTH];
    char str2[MAX_LENGTH];

    std::cout << "Enter first string: ";
    std::cin.getline(str1, MAX_LENGTH);
    std::cout << "Enter second string: ";
    std::cin.getline(str2, MAX_LENGTH);

    bool isEqual = Compare(str1, str2);
    std::cout << "Strings are " << (isEqual ? "equal" : "not equal") << std::endl;

    return 0;
}
