#include <iostream>
using namespace std;

class BigInt
{
    int num;

public:
    BigInt() : num(0)
    {
    }
    BigInt(int n) : num(n)
    {
    }

    BigInt operator+(BigInt &obj)
    {
        return BigInt(num + obj.num);
    }

    BigInt operator-(BigInt &obj)
    {
        return BigInt(num - obj.num);
    }

    BigInt operator*(BigInt &obj)
    {
        return BigInt(num * obj.num);
    }

    BigInt operator/(BigInt &obj)
    {
        if (obj.num == 0)
        {
            cerr << "Division by zero" << endl;
            return BigInt(0);
        }
        return BigInt(num / obj.num);
    }

    BigInt operator++()
    {
        num++;
        return (*this);
    }
    BigInt operator++(int)
    {
        BigInt temp = *this;
        num++;
        return (temp);
    }

    BigInt operator--()
    {
        num--;
        return (*this);
    }
    BigInt operator--(int)
    {
        BigInt temp = *this;
        num--;
        return (temp);
    }
    void Read()
    {
        cin >> num;
    }
    void Write()
    {
        cout << num;
    }

    bool operator==(BigInt &obj2)
    {
        return (num == obj2.num);
    }
};

int main()
{
    BigInt i(10);
    BigInt j(20);

    cout << "i = ";
    i.Write();
    cout << endl;

    cout << "j = ";
    j.Write();
    cout << endl;

    BigInt result;

    // binary operators
    result = i + j;
    cout << "i + j = ";
    result.Write();
    cout << endl;

    result = i - j;
    cout << "i - j = ";
    result.Write();
    cout << endl;

    result = i * j;
    cout << "i * j = ";
    result.Write();
    cout << endl;

    result = i / j;
    cout << "i / j = ";
    result.Write();
    cout << endl;

    // unary operators
    result = ++i;
    cout << "++i = ";
    result.Write();
    cout << endl;

    result = i++;
    cout << "i++ = ";
    result.Write();
    cout << endl;

    result = --i;
    cout << "--i = ";
    result.Write();
    cout << endl;

    result = i--;
    cout << "i-- = ";
    result.Write();
    cout << endl;

    return 0;
}
