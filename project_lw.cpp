#include <iostream>
#include <string>
using namespace std;

class bank_management
{
private:
    string name, type;
    long mobile_no;
    int pin_no;
    int balance = 0;
    int account_no = 123456789;
    int z, a, x, y;

public:
    int create_account()
    {
        cout << "thank you for choosing our bank" << endl;
        cout << "enter ur name:" << endl;
        cin >> name;
        cout << "enter ur mobile_no" << endl;
        cin >> mobile_no;
        cout << "enter ur pin_no" << endl;
        cin >> pin_no;
        cout << "Enter the type of account you have to create(savings/current):" << endl;
        cin >> type;
        cout << "the amount you have to deposit in your account:" << endl;
        cin >> balance;

        return ++account_no;
    }
    void account_details()
    {
        cout << "enter ur account and pin number:" << endl;
        cin >> z;
        cin >> a;
        if (z == account_no && a == pin_no)
        {

            cout << "your details are:";
            cout << "name:" << name << endl;
            cout << "Mobile number:" << mobile_no << endl;
            cout << "pin number:" << pin_no << endl;
            cout << "type:" << type << endl;
            cout << "account number:" << account_no << endl;
            cout << "balance:" << balance << endl;
        }
        else
        {
            cout << "invalid details enter again!!" << endl;
        }
    }

    int deposit(int amount)
    {
        cout << "enter your account no. and pin no. :" << endl;
        cin >> z;
        cin >> a;
        if (z == account_no && pin_no == a)
        {
            return balance += amount;
        }
        else
        {
            cout << "the account_no or pin_no is not match please check once again" << endl;
        }
    }

    void withdraw(int amount)
    {
        cout << "enter your account no. and pin no. :" << endl;
        cin >> z;

        cin >> a;

        if (z == account_no && a == pin_no)
        {

            if (balance >= amount)
            {
                balance -= amount;
                cout << "Your Withdrawl is Successfull......." << endl;
                cout << "Your Available Balance is :-" << balance << endl;
            }
            else
            {
                cout << "insufficient balance" << endl;
            }
        }

        else
        {
            cout << "the account_no or pin_no is not match please check once again" << endl;
        }
    }

    void modify()
    {
        int ch;
        cout << "enter your account no. and pin no. :" << endl;
        cin >> z;
        cin >> a;
        if (z == account_no && a == pin_no)
        {
            cout << "1.name" << endl;
            cout << "2.mobile number" << endl;
            cout << "3.type of account number" << endl;
            cout << "4.pin number" << endl;
            cout << "select choice to modify:" << endl;
            cin >> ch;

            switch (ch)
            {
            case 1:

                cout << "enter your modify name/t:" << endl;
                cin >> name;
                break;
            case 2:
                cout << "enter your mobile number/t" << endl;
                cin >> mobile_no;
                break;
            case 3:
                cout << "enter your type of account" << endl;
                cin >> type;
                break;
            default:
                cout << "exit" << endl;
                break;
            }
        }
        else
        {
            cout << "account number not match" << endl;
        }
    }
};

int main()
{

    int choice, acc, amt, deposit_amt, withdraw_amt;

    bank_management Khushi;

    do
    {

        cout << "1. CREATE ACCOUNT\n";
        cout << "2. DEPOSIT AMOUNT\n";
        cout << "3. WITHDRAW AMOUNT\n";
        cout << "4. SHOW DETAILS\n";
        cout << "5. MODIFY AN ACCOUNT\n";
        cout << "6. EXIT\n";
        cout << "\n\n\tSelect Your Option (1-6)\n ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            acc = Khushi.create_account();
            cout << "Your Acc No. is :-" << acc << endl;
            break;
        case 2:
            cout << "write the amount you have deposit:" << endl;
            cin >> amt;

            deposit_amt = Khushi.deposit(amt);

            cout << "Total balance is :-" << deposit_amt << endl;
            break;
        case 3:

            cout << "write the amount you have withdraw:" << endl;
            cin >> withdraw_amt;

            Khushi.withdraw(withdraw_amt);

            break;

        case 4:

            Khushi.account_details();
            break;
        case 5:
            Khushi.modify();
            break;

        default:
            cout << "\n\n\tThanks for using bank managemnt system";
            break;
        }

    } while (choice <= 5 && choice > 0);
    return 0;
}