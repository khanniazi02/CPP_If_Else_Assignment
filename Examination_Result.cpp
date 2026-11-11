
#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;
    float total, per;

    cout << "Enter five subject marks: ";
    cin >> a >> b >> c >> d >> e;

    total = a + b + c + d + e;
    per = total / 500 * 100;

    cout << "Percentage = " << per << "%" << endl;

    if (a < 40 || b < 40 || c < 40 || d < 40 || e < 40)
        cout << "Failed";
    else {
        cout << "Passed" << endl;

        if (per >= 85)
            cout << "Gold Medal";
        else if (per >= 75)
            cout << "Silver Medal";
        else if (per >= 65)
            cout << "Merit Scholarship";
        else if (per >= 50)
            cout << "Degree Eligible";
        else
            cout << "Not Eligible for Degree";
    }

    return 0;
}
