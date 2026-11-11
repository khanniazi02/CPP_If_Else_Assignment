
#include <iostream>
using namespace std;

int main() {
    float matric, inter, test;
    
    cout << "Enter Matric marks: ";
    cin >> matric;

    cout << "Enter Intermediate marks: ";
    cin >> inter;

    cout << "Enter Entry Test marks: ";
    cin >> test;

    if (matric >= 60 && inter >= 65 && test >= 50) {
        cout << "Admission Approved" << endl;

        if (inter >= 85 && test >= 80)
            cout << "Merit Scholarship Eligible";
        else
            cout << "General Admission";
    }
    else
        cout << "Admission Rejected";

    return 0;
}
