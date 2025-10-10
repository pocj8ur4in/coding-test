#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int year;
    cin >> year;

    bool is_leap_year = false;
    if ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0))) {
        is_leap_year = true;
    }

    if (is_leap_year) {
        cout << "1";
    } else {
        cout << "0";
    }

    return 0;
}