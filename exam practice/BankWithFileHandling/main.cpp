#include "account.h"
#include <vector>

using namespace std;

int main()
{
    vector<Account> accounts;

    // Read existing accounts from file
    ifstream inFile("accounts.txt");

    // if (inFile.peek() != std::ifstream::traits_type::eof())
    // {
    //     // File is not empty, proceed with reading
    //     // You can put your existing reading logic here
    //     if (inFile.is_open())
    //     {
    //         while (!inFile.eof())
    //         {
    //             Account newAccount;
    //             newAccount.ReadFromFile(inFile);
    //             accounts.push_back(newAccount);
    //         }
    //         inFile.close();
    //     }
    //     else
    //     {
    //         cout << "Error opening file for reading!" << endl;
    //         return 1;
    //     }
    // }
    // else
    // {
    //     cout << "The file is empty. You can add new accounts." << endl;
    // }

    if (inFile.is_open() && inFile.peek() != std::ifstream::traits_type::eof())
    {
        // File exists and is not empty, read objects into the vector
        while (!inFile.eof())
        {
            Account temp;
            temp.ReadFromFile(inFile);
            accounts.push_back(temp);
        }
        cout << "File loaded. " << accounts.size() << " accounts found." << endl;
    }
    else
    {
        cout << "File not found or is empty. Creating a new file." << endl;
    }

    inFile.close(); // Close the file before reopening

    ofstream outFile("accounts.txt", ios::app); // Open file in append mode
    if (!outFile.is_open())
    {
        cout << "Error opening the file for writing." << endl;
        return 1; // Return an error code
    }

    int operation;
    int acc_num;
    do
    {
        cout << "Choose from the following operation" << endl;
        cout << " 1. Add account" << endl;
        cout << " 2. Withdraw from account" << endl;
        cout << " 3. Deposit to account" << endl;
        cout << " 4. Display all account details" << endl;
        cout << " 5. Display individual account details" << endl;
        cout << " 0. Exit" << endl;
        cin >> operation;

        switch (operation)
        {
        case 1:
        {
            Account newAccount;
            newAccount.AddAccount();
            newAccount.Display();
            accounts.push_back(newAccount);
            ofstream outFile("accounts.txt", ios::app);
            if (outFile.is_open())
            {
                newAccount.WriteToFile(outFile);
                outFile.close();
            }
            else
            {
                cout << "Error opening file for writing!" << endl;
                return 1;
            }
        }
        break;

        case 2:
            cout << "Enter account number" << endl;
            cin >> acc_num;
            for (auto &acc : accounts)
            {
                acc.Withdraw(acc_num);
            }
            break;

        case 3:
            cout << "Enter account number" << endl;
            cin >> acc_num;
            for (auto &acc : accounts)
            {
                acc.Deposit(acc_num);
            }
            break;

        case 4:
            for (const auto &acc : accounts)
            {
                cout << "Details of account number: " << acc.getAccountNumber() << endl;
                acc.Display();
                cout << endl;
            }
            break;

        case 5:
            cout << "Enter account number" << endl;
            cin >> acc_num;
            for (const auto acc : accounts)
            {
                if (acc.getAccountNumber() == acc_num)
                {
                    acc.Display();
                    break;
                }
            }
            break;

        case 0:
            cout << "Exited successfully" << endl;
            exit(0);
            break;

        default:
            cout << "Please enter a valid choice" << endl;
            break;
        }
    } while (operation != 0);

    // // Open the file in truncation mode and write all account details
    // ofstream outFile("accounts.txt", ios::trunc);
    // if (outFile.is_open())
    // {
    //     for (auto &acc : accounts)
    //     {
    //         acc.WriteToFile(outFile);
    //     }
    //     outFile.close();
    // }
    // else
    // {
    //     cout << "Error opening file for writing!" << endl;
    //     return 1;
    // }

    // Open the file in output and truncation mode to create or truncate the file
    // ofstream outFile("accounts.txt", ios::out | ios::trunc);
    // if (outFile.is_open())
    // {
    //     for (auto &acc : accounts)
    //     {
    //         acc.WriteToFile(outFile);
    //     }
    //     outFile.close();
    // }
    // else
    // {
    //     cout << "Error opening file for writing!" << endl;
    //     return 1;
    // }

    outFile.close(); // Close the file after the loop

    // Open the file again in truncation mode to clear existing content
    outFile.open("accounts.txt", ios::out | ios::trunc);
    if (outFile.is_open())
    {
        // Write the entire updated data
        for (auto &acc : accounts)
        {
            acc.WriteToFile(outFile);
        }
        outFile.close();
    }
    else
    {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }

    return 0;
}
