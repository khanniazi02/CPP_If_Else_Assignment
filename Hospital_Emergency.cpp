
#include <iostream>
using namespace std;

int main() {
    int age, oxygen, heart;
    float temp;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter temperature: ";
    cin >> temp;

    cout << "Enter oxygen level: ";
    cin >> oxygen;

    cout << "Enter heart rate: ";
    cin >> heart;

    if (oxygen < 90 || heart > 130 || heart < 45)
        cout << "Critical Priority";
    else if (age > 65 && temp > 102)
        cout << "High Priority";
    else if (oxygen >= 90 && oxygen <= 94)
        cout << "Moderate Priority";
    else
        cout << "Normal Priority";

    return 0;
}
