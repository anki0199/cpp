#include <iostream>
using namespace std;

class Date
{
private:
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
        cout << "Enter day: ";
        cin >> day;
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter year: ";
        cin >> year;
    }

    void Write()
    {
        cout << day << "/" << month << "/" << year;
    }

    Date operator+(int n)
    {
        return Date(day + n, month, year);
    }

    Date operator-(int n)
    {
        return Date(day - n, month, year);
    }

    Date operator-(Date &obj)
    {
        return Date(day - obj.day, month - obj.month, year - obj.year);
    }
    Date &operator++()
    {
        ++day;
        return *this;
    }

    Date operator++(int)
    {
        Date temp(*this);
        ++day;
        return temp;
    }

    Date &operator--()
    {
        --day;
        return *this;
    }

    Date operator--(int)
    {
        Date temp(*this);
        --day;
        return temp;
    }

    bool operator==(Date &obj2)
    {
        return (day == obj2.day) && (month == obj2.month) && (year == obj2.year);
    }

    bool operator!=(Date &obj2)
    {
        return !(*this == obj2);
    }

    bool operator<(Date &obj2)
    {
        if (year != obj2.year)
        {
            return year < obj2.year;
        }
        if (month != obj2.month)
        {
            return month < obj2.month;
        }
        return day < obj2.day;
    }
};

int main()
{
    Date date1;
    Date date2;

    cout << "Enter Date 1:\n";
    date1.Read();

    cout << "Enter Date 2:\n";
    date2.Read();

    cout << "Date 1: ";
    date1.Write();
    cout << endl;

    cout << "Date 2: ";
    date2.Write();
    cout << endl;

    //  binary operators
    int daysToAdd;
    cout << "Enter the number of days to add to Date 1: ";
    cin >> daysToAdd;
    Date resultDate1 = date1 + daysToAdd;
    cout << "Date 1 + " << daysToAdd << " days = ";
    resultDate1.Write();
    cout << endl;

    Date resultDate3 = date1 - date2;
    cout << "Date 1 - Date 2 = ";
    resultDate3.Write();
    cout << endl;

    int daysToSubtract;
    cout << "Enter the number of days to subtract from Date 1: ";
    cin >> daysToSubtract;
    Date resultDate4 = date1 - daysToSubtract;
    cout << "Date 1 - " << daysToSubtract << " days = ";
    resultDate4.Write();
    cout << endl;

    //  unary operators
    Date date3 = date1;
    Date resultDate2 = ++date3;
    cout << "++Date 3 = ";
    resultDate2.Write();
    cout << endl;

    Date date4 = date1;
    Date resultDate5 = date4++;
    cout << "Date 4++ = ";
    resultDate5.Write();
    cout << endl;

    Date date5 = date1;
    Date resultDate6 = --date5;
    cout << "--Date 5 = ";
    resultDate6.Write();
    cout << endl;

    Date date6 = date1;
    Date resultDate7 = date6--;
    cout << "Date 6-- = ";
    resultDate7.Write();
    cout << endl;

    return 0;
}
