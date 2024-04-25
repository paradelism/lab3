#include <iostream>

using namespace std;

int main() {
    int year;
    cout << "Sign the year: ";
    cin >> year;

    bool leap_year = (year % 4 == 0) && (year % 100 != 0 || year % 400 == 0);

    int days = 365 + leap_year;

    cout << "in " << year << " year = " << days << " days" << endl;

    return 0;
}
