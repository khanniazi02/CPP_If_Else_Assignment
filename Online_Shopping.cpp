
#include <iostream>
using namespace std;

int main() {
    float amount, discount, finalAmount;
    int premium, unpaid;

    cout << "Enter purchase amount: ";
    cin >> amount;

    cout << "Premium member? (1=Yes, 0=No): ";
    cin >> premium;

    cout << "Previous unpaid order? (1=Yes, 0=No): ";
    cin >> unpaid;

    if (amount > 50000)
        discount = 20;
    else if (amount > 25000)
        discount = 15;
    else if (amount > 10000)
        discount = 10;
    else
        discount = 0;

    if (premium == 1)
        discount = discount + 5;

    finalAmount = amount - (amount * discount / 100);

    if (finalAmount > 20000)
        finalAmount = finalAmount;
    else
        finalAmount = finalAmount + 500;

    if (unpaid == 1)
        cout << "Order Not Confirmed";
    else {
        cout << "Order Confirmed" << endl;
        cout << "Payable Amount = Rs. " << finalAmount;
    }

    return 0;
}
