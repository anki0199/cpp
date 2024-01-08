#include <bits/stdc++.h>
using namespace std;
class Account
{
    int acc_no;
    string acc_name;
    string acc_type;
    int acc_bal;

public:
    void set_data();
    int get_acc();
    void withdraw();
    void deposit();

    void displayOne();
};