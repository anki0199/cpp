/*
2. Implement a Date class with following member functions. Also overload remaining relational operators to compare two dates.
   Also write a small program to demonstrate the use of Date class and overloaded relational operators.
class Date {
    int day;
    int month;
    int year;
public:
    Date();
    Date(int d, int m, int y);
    void Read();
    void Write();
    bool operator==(Date obj2);
};

*/
#include <iostream>

class Date
{
    int day;
    int month;
    int year;

public:
    Date() : day(1), month(1), year(2000)
    {
    }

    Date(int d, int m, int y) : day(d), month(m), year(y)
    {
    }

    void Read()
    {
        std::cout << "Enter day: ";
        std::cin >> day;
        std::cout << "Enter month: ";
        std::cin >> month;
        std::cout << "Enter year: ";
        std::cin >> year;
    }

    void Write()
    {
        std::cout << day << "/" << month << "/" << year;
    }

    bool operator==(Date obj2)
    {
        return (day == obj2.day) && (month == obj2.month) && (year == obj2.year);
    }

    bool operator<(Date obj2)
    {
        if (year < obj2.year)
        {
            return true;
        }
        else if (year > obj2.year)
        {
            return false;
        }
        else
        {
            if (month < obj2.month)
            {
                return true;
            }
            else if (month > obj2.month)
            {
                return false;
            }
            else
            {
                return (day < obj2.day);
            }
        }
    }

    bool operator>(Date obj2)
    {
        return !(*this == obj2) && !(*this < obj2);
    }

    bool operator<=(Date obj2)
    {
        return (*this == obj2) || (*this < obj2);
    }

    bool operator>=(Date obj2)
    {
        return (*this == obj2) || (*this > obj2);
    }
};

int main()
{
    Date date1;
    Date date2;

    std::cout << "Enter Date 1:\n";
    date1.Read();

    std::cout << "Enter Date 2:\n";
    date2.Read();

    std::cout << "Date 1: ";
    date1.Write();
    std::cout << std::endl;

    std::cout << "Date 2: ";
    date2.Write();
    std::cout << std::endl;

    if (date1 == date2)
    {
        std::cout << "Dates are equal\n";
    }
    else
    {
        std::cout << "Dates are NOT equal\n";
    }

    if (date1 < date2)
    {
        std::cout << "Date 1 is earlier than Date 2\n";
    }
    else
    {
        std::cout << "Date 1 is NOT earlier than Date 2\n";
    }

    if (date1 > date2)
    {
        std::cout << "Date 1 is later than Date 2\n";
    }
    else
    {
        std::cout << "Date 1 is NOT later than Date 2\n";
    }

    if (date1 <= date2)
    {
        std::cout << "Date 1 is on or before Date 2\n";
    }
    else
    {
        std::cout << "Date 1 is NOT on or before Date 2\n";
    }

    if (date1 >= date2)
    {
        std::cout << "Date 1 is on or after Date 2\n";
    }
    else
    {
        std::cout << "Date 1 is NOT on or after Date 2\n";
    }

    return 0;
}
