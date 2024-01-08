/*
3. Design (define what all constructors, member functions and operator functions to overload relational operators) and implement them.
   Also write a small program to demonstrate the use of String class and overloaded relational operators.
*/

#include <iostream>
#include <cstring>

class String
{
private:
    char *str;

public:
    String();
    String(const char *s);
    String(const String &obj);
    ~String();

    int Length() const;
    void Display() const;

    bool operator==(const String &obj) const;
    bool operator!=(const String &obj) const;
    bool operator<(const String &obj) const;
    bool operator>(const String &obj) const;
    bool operator<=(const String &obj) const;
    bool operator>=(const String &obj) const;
};

String::String() : str(nullptr)
{
}

String::String(const char *s)
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

String::String(const String &obj)
{
    if (obj.str)
    {
        str = new char[strlen(obj.str) + 1];
        strcpy(str, obj.str);
    }
    else
    {
        str = nullptr;
    }
}

String::~String()
{
    delete[] str;
}

int String::Length() const
{
    return (str) ? strlen(str) : 0;
}

void String::Display() const
{
    if (str)
    {
        std::cout << str;
    }
}

bool String::operator==(const String &obj) const
{
    return (strcmp(str, obj.str) == 0);
}

bool String::operator!=(const String &obj) const
{
    return !(*this == obj);
}

bool String::operator<(const String &obj) const
{
    return (strcmp(str, obj.str) < 0);
}

bool String::operator>(const String &obj) const
{
    return (strcmp(str, obj.str) > 0);
}

bool String::operator<=(const String &obj) const
{
    return (*this < obj) || (*this == obj);
}

bool String::operator>=(const String &obj) const
{
    return (*this > obj) || (*this == obj);
}

int main()
{
    String s1("Hello");
    String s2("World");
    String s3(s1);

    std::cout << "s1: ";
    s1.Display();
    std::cout << std::endl;

    std::cout << "s2: ";
    s2.Display();
    std::cout << std::endl;

    std::cout << "s3: ";
    s3.Display();
    std::cout << std::endl;

    if (s1 == s2)
    {
        std::cout << "s1 is equal to s2\n";
    }
    else
    {
        std::cout << "s1 is not equal to s2\n";
    }

    if (s1 != s3)
    {
        std::cout << "s1 is not equal to s3\n";
    }
    else
    {
        std::cout << "s1 is equal to s3\n";
    }

    if (s1 < s2)
    {
        std::cout << "s1 is less than s2\n";
    }
    else
    {
        std::cout << "s1 is not less than s2\n";
    }

    if (s2 > s3)
    {
        std::cout << "s2 is greater than s3\n";
    }
    else
    {
        std::cout << "s2 is not greater than s3\n";
    }

    if (s1 <= s3)
    {
        std::cout << "s1 is less than or equal to s3\n";
    }
    else
    {
        std::cout << "s1 is not less than or equal to s3\n";
    }

    if (s2 >= s2)
    {
        std::cout << "s2 is greater than or equal to s2\n";
    }
    else
    {
        std::cout << "s2 is not greater than or equal to s2\n";
    }

    return 0;
}
