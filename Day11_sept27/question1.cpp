/*
1. In String class, implement following:
   - Copy constructor to perform deep copy.
   - Overload assignment operator, to perform deep copy.
*/

#include <iostream>
#include <cstring>

class String
{
private:
    char *str;

public:
    String() : str(nullptr)
    {
    }

    String(char *s)
    {
        if (s)
        {
            str = new char[strlen(s) + 1];
            strcpy(str, s);
        }
        else
        {
            str = nullptr;
        }
    }

    String(String &other)
    {
        if (other.str)
        {
            str = new char[strlen(other.str) + 1];
            strcpy(str, other.str);
        }
        else
        {
            str = nullptr;
        }
    }

    String &operator=(String &other)
    {
        if (this == &other)
        {
            return *this;
        }
        delete[] str;
        if (other.str)
        {
            str = new char[strlen(other.str) + 1];
            strcpy(str, other.str);
        }
        else
        {
            str = nullptr;
        }
        return *this;
    }

    ~String()
    {
        delete[] str;
    }

    void Display() 
    {
        if (str)
        {
            std::cout << str;
        }
    }
};

int main()
{
    String s1("Hello");
    String s2("World");

    String s3(s1);
    std::cout << "s3: ";
    s3.Display();
    std::cout << std::endl;

    s2 = s1;
    std::cout << "s2: ";
    s2.Display();
    std::cout << std::endl;

    return 0;
}
