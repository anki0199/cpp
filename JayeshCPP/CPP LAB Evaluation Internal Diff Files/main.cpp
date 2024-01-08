#include "account.cpp"
int main()
{
    vector<Account> vect;
    char ch;
    do
    {
        cout << "\n\n\t\t\t\t\tWelcome to CDAC Bank Corp. Panchwati\n\n";
        cout << "1.Open New Account\n2.Withdraw Amount\n3.Deposit Amount\n4.Display All Account Details\n5.Display Account by Account Number\n\nChoice: ";
        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            Account obj;
            obj.set_data();
            vect.push_back(obj);
        }
        break;

        case 2:
        {
            int accno, flag = 0;
            cout << "\nEnter Account Number: ";
            cin >> accno;
            for (int i = 0; i < vect.size(); i++)
            {
                if (vect.at(i).get_acc() == accno)
                {
                    flag = 1;
                    vect.at(i).withdraw();
                    break;
                }
            }
            if (flag == 0)
                cout << "\n\nInvalid Account Number....!";
        }
        break;

        case 3:
        {
            int accno, flag = 0;
            cout << "\nEnter Account Number: ";
            cin >> accno;
            for (int i = 0; i < vect.size(); i++)
            {
                if (vect.at(i).get_acc() == accno)
                {
                    flag = 1;
                    vect.at(i).deposit();
                    break;
                }
            }
            if (flag == 0)
                cout << "\n\nInvalid Account Number....!";
        }
        break;

        case 4:
        {
            for (int i = 0; i < vect.size(); i++)
            {
                // vect.at(i).displayOne();
                vect[i].displayOne();
            }
        }
        break;

        case 5:
        {
            int accno, flag = 0;
            cout << "\nEnter Account Number: ";
            cin >> accno;
            for (int i = 0; i < vect.size(); i++)
            {
                if (vect.at(i).get_acc() == accno)
                {
                    flag = 1;
                    vect.at(i).displayOne();
                    break;
                }
            }
            if (flag == 0)
                cout << "\n\nInvalid Account Number....!";
        }
        break;

        default:
            cout << "\n\nInvalid Choice..!";
            break;
        }
        cout << "\n\nContinue? (Y/N): ";
        cin >> ch;
        system("cls");
    } while (ch == 'Y' || ch == 'y');
}
