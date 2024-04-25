#include <iostream>

using namespace std;

int main() {
    double scale, distance_cm;

    cout << "Computing the distance between areas." << endl;

    cout << "Enter input data:" << endl;
    cout << "Map scale (number of kilometers per centimeter) -> ";
    cin >> scale;
    cout << "Distance between points representing areas (cm) -> ";
    cin >> distance_cm;

    double distance_km = distance_cm / 100 * scale;

    cout << "Distance between areas: " << distance_km << " km." << endl;

    return 0;
}
