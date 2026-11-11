
#include <iostream>
using namespace std;

int main() {
    int age, years, credit;
    float salary, installment;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter monthly salary: ";
    cin >> salary;

    cout << "Enter employment years: ";
    cin >> years;

    cout << "Enter monthly installments: ";
    cin >> installment;

    cout << "Enter credit score: ";
    cin >> credit;

    if (age >= 21 && salary >= 50000 && years >= 2 &&
        installment <= salary * 0.40 && credit >= 600) {

        if (salary > 150000 && years > 5)
            cout << "Premium Loan Approved";
        else
            cout << "Loan Approved";
    }
    else
        cout << "Loan Rejected";

    return 0;
}
