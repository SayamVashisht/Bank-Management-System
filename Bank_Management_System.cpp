#include <iostream>
#include <string>

using namespace std;
class bank
{
    string fullName, address;
    string input;

    int count = 0;
    float balance = 0;
    float deposit;
    float withdraw;

public:
    void open_account()
    {
        cout << "Enter your full name: " << endl;
        getline(cin >> ws, fullName);
        cout << "Enter your full address: " << endl;
        getline(cin >> ws, address);

        while (count < 3)
        {

            cout << "What type of account you want to open , Saving (s) or Current(c) " << endl;
            cin >> input;
            count++;

            if (input == "c" || input == "C")
            {
                cout << "Current Account opened " << endl;
                break;
            }
            else if (input == "s" || input == "S")
            {
                cout << "Saving Account opened" << endl;
                break;
            }
            else
                cout << "Invalid input : "
                     << "Try Again" << endl;
        }
        cout << "Enter the money to be deposited" << endl;
        cin >> balance;
        cout << "Your account is created " << endl;
    }

    void deposit_money()
    {
        cout << "Enter the money you want to deposit" << endl;
        cin >> deposit;
        balance = balance + deposit;
        cout << "Total money deposited in the bank :" << balance << endl;
    }

    void withdraw_money()
    {
        cout << "Enter the money you want to withdraw :" << endl;
        cin >> withdraw;
        balance = balance - withdraw;
        cout << "Your remaining balance is:  " << balance << endl;
    }

    void display_account()
    {
        cout << "Your full name is:  " << fullName << endl;
        cout << "Your address is:  " << address << endl;
        cout << "Your account type is:  " << input << endl;
        cout << "Your balance is:  " << balance << endl;
    }
};

int main()
{
    int option;
    char x;
    bank obj;
    do
    {

        cout << "Welcome to the Bank." << endl;
        cout << "1) Open Account" << endl;
        cout << "2) Depsoit Money" << endl;
        cout << "3) Withdraw Money" << endl;
        cout << "4) Display Account" << endl;
        cout << "5) Exit" << endl;
        cout << "Select an option from above" << endl;
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "1) Open Account" << endl;
            obj.open_account();
            break;
        case 2:
            cout << "2) Depsoit Money" << endl;
            obj.deposit_money();
            break;
        case 3:
            cout << "3) Withdraw Money" << endl;
            obj.withdraw_money();
            break;
        case 4:
            cout << "4) Display Account" << endl;
            obj.display_account();
            break;
        case 5:
            if (option == 5)
            {
                exit(1);
            }
        default:
            cout << "Please enter a valid option" << endl;
        }
        cout << "If you want to select the next option , press : Y" << endl;
        cout << "If you want to exit , press : N" << endl;
        cin >> x;
        if (x == 'n' || x == 'N')
            exit(0);
    } while (x == 'y' || x == 'Y');
    cin >> x;
    return 0;
}