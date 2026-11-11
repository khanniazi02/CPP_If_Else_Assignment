
#include <iostream>
using namespace std;

int main() {
    float salary, attendance, rating, bonus = 0;
    int years;

    cout << "Enter salary: ";
    cin >> salary;

    cout << "Enter attendance percentage: ";
    cin >> attendance;

    cout << "Enter performance rating: ";
    cin >> rating;

    cout << "Enter working years: ";
    cin >> years;

    if (rating >= 3) {
        if (attendance < 75)
            bonus = 0;
        else if (attendance <= 89)
            bonus = salary * 0.05;
        else if (attendance <= 95)
            bonus = salary * 0.10;
        else
            bonus = salary * 0.15;
    }

    salary = salary + bonus;

    if (years > 5)
        salary = salary + 5000;

    cout << "Final Salary = Rs. " << salary;

    return 0;
}
