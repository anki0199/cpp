#include <iostream>
#include <string>

using namespace std;

const string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
const string teens[] = {"", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
const string tens[] = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

void printThreeDigits(int number) {
    int hundreds = number / 100;
    int remainder = number % 100;

    if (hundreds > 0) {
        cout << ones[hundreds] << " Hundred ";
        if (remainder > 0) {
            cout << "and ";
        }
    }

    if (remainder == 0) {
        return;
    }

    if (remainder < 10) {
        cout << ones[remainder];
    } else if (remainder < 20) {
        cout << teens[remainder - 10];
    } else {
        int tensPlace = remainder / 10;
        int onesPlace = remainder % 10;
        cout << tens[tensPlace];
        if (onesPlace > 0) {
            cout << " " << ones[onesPlace];
        }
    }
}

int main() {
    long long N;

    do {
        cout << "Enter a positive integer: ";
        cin >> N;
    } while (N < 0);

    if (N == 0) {
        cout << "Zero" << endl;
        return 0;
    }

    int billions = N / 1000000000;
    int millions = (N % 1000000000) / 1000000;
    int thousands = (N % 1000000) / 1000;
    int remainder = N % 1000;

    if (billions > 0) {
        printThreeDigits(billions);
        cout << " Billion ";
    }

    if (millions > 0) {
        printThreeDigits(millions);
        cout << " Million ";
    }

    if (thousands > 0) {
        printThreeDigits(thousands);
        cout << " Thousand ";
    }

    printThreeDigits(remainder);

    cout << endl;

    return 0;
}
