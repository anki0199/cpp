/*
2. Copy the source string "src" into destination string "dest".
void StrCpy(char dest[], char src[]);
*/

#include <iostream>

void StrCpy(char dest[], char src[])
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int main()
{
    const int MAX_LENGTH = 100;
    char str1[MAX_LENGTH];
    char str2[MAX_LENGTH];

    std::cout << "Enter a string: ";
    std::cin.getline(str1, MAX_LENGTH);

    StrCpy(str2, str1);
    std::cout << "Copied string: " << str2 << std::endl;

    return 0;
}
