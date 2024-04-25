#include <iostream>

using namespace std;

int main() {
    int hryvnia, kopiyka;
    cout << "Enter the amount: ";
    cin >> hryvnia >> kopiyka;

    hryvnia += kopiyka / 100;
    kopiyka %= 100;

    cout << "Sum in the right form: " << hryvnia << " hrn. " << kopiyka << " kop." << endl;

    return 0;
}
