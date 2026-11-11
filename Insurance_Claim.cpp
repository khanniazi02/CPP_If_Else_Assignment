
#include <iostream>
using namespace std;

int main() {
    int insurance, policy, licence, alcohol, responsible;
    float damage, payable;

    cout << "Valid insurance? (1=Yes, 0=No): ";
    cin >> insurance;

    cout << "Policy active? (1=Yes, 0=No): ";
    cin >> policy;

    cout << "Valid licence? (1=Yes, 0=No): ";
    cin >> licence;

    cout << "Alcohol used? (1=Yes, 0=No): ";
    cin >> alcohol;

    cout << "Enter damage amount: ";
    cin >> damage;

    cout << "Driver responsible? (1=Yes, 0=No): ";
    cin >> responsible;

    if (insurance == 0 || policy == 0 ||
        licence == 0 || alcohol == 1)
        cout << "Claim Rejected";
    else {
        if (damage < 20000)
            cout << "Claim Approved";
        else if (damage <= 200000)
            cout << "Physical Inspection Required";
        else
            cout << "Manager Approval Required";

        payable = damage;

        if (responsible == 1)
            payable = payable - payable * 0.20;

        cout << endl << "Payable Amount = Rs. " << payable;
    }

    return 0;
}
