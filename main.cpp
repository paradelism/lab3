#include <iostream>

using namespace std;

int main() {
    double length, width, height;

    cout << "Calculating the volume of a parallelepiped." << endl;

    cout << "Enter the input data:" << endl;
    cout << "Length (cm) -> ";
    cin >> length;

    cout << "Width (cm) -> ";
    cin >> width;

    cout << "Height (cm) -> ";
    cin >> height;

    double volume = length * width * height;

    cout << "Volume: " << volume << " cubic cm." << endl;

    return 0;
}
