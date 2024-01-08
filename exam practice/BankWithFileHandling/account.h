#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
#include <iostream>
#include <fstream>

class Account {
private:
    static int count;
    int acc_number;
    std::string user_name;
    std::string acc_type;
    float acc_balance;

public:
    Account();
    int getAccountNumber() const;
    int getAccountBalance();
    void setAccountBalance(float);
    void Display() const;
    void AddAccount();
    void Withdraw(int);
    void Deposit(int);
    void WriteToFile(std::ofstream& outFile);
    void ReadFromFile(std::ifstream& inFile);
};

#endif
