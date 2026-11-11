
#include <iostream>
using namespace std;

int main() {
    float distance, waiting, fare;
    int hour, premium;

    cout << "Enter distance in KM: ";
    cin >> distance;

    cout << "Enter waiting minutes: ";
    cin >> waiting;

    cout << "Enter ride hour (0-23): ";
    cin >> hour;

    cout << "Premium member? (1=Yes, 0=No): ";
    cin >> premium;

    fare = 150 + (distance * 50) + (waiting * 10);

    if (hour >= 22 || hour < 6)
        fare = fare + fare * 0.20;

    if (premium == 1)
        fare = fare - fare * 0.10;

    cout << "Final Ride Fare = Rs. " << fare;

    return 0;
}
