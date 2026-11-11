
#include <iostream>
using namespace std;

int main() {
    float balance, withdraw;
    int daily, blocked;

    cout << "Enter account balance: ";
    cin >> balance;

    cout << "Enter withdrawal amount: ";
    cin >> withdraw;

    cout << "Enter daily withdrawn amount: ";
    cin >> daily;

    cout << "Account blocked? (1=Yes, 0=No): ";
    cin >> blocked;

    if (blocked == 1)
        cout << "Transaction Rejected";
    else if (withdraw < 500 || (int)withdraw % 500 != 0)
        cout << "Invalid Withdrawal";
    else if (withdraw > balance)
        cout << "Insufficient Balance";
    else if (withdraw + daily > 100000)
        cout << "Daily Limit Exceeded";
    else {
        if (withdraw > 50000)
            cout << "Additional Verification Required" << endl;

        balance = balance - withdraw;

        cout << "Withdrawal Allowed" << endl;
        cout << "Remaining Balance = Rs. " << balance;
    }

    return 0;
}
