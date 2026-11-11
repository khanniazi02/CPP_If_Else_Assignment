
#include <iostream>
using namespace std;

int main() {
    int speed, violation, licence, registered;
    float fine = 0;

    cout << "Enter speed: ";
    cin >> speed;

    cout << "Previous violations? (1=Yes, 0=No): ";
    cin >> violation;

    cout << "Valid licence? (1=Yes, 0=No): ";
    cin >> licence;

    cout << "Registered vehicle? (1=Yes, 0=No): ";
    cin >> registered;

    if (speed <= 60)
        fine = 0;
    else if (speed <= 80)
        fine = 2000;
    else if (speed <= 100)
        fine = 5000;
    else
        fine = 10000;

    if (violation == 1)
        fine = fine + fine * 0.25;

    if (licence == 0)
        fine = fine + 5000;

    if (registered == 0)
        fine = fine + 10000;

    cout << "Total Fine = Rs. " << fine << endl;

    if (licence == 0 || registered == 0)
        cout << "Journey Not Allowed";
    else
        cout << "Journey Allowed";

    return 0;
}
