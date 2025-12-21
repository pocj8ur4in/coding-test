#include <iostream>

using namespace std;

int N;
string young;
int young_day;
int young_month;
int young_year;
string old;
int old_day;
int old_month;
int old_year;

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    cin >> N;

    cin >> young >> young_day >> young_month >> young_year;
    old = young;
    old_day = young_day;
    old_month = young_month;
    old_year = young_year;

    for (int i = 1; i < N; i++) {
        string tmp;
        int tmp_day;
        int tmp_month;
        int tmp_year;

        cin >> tmp >> tmp_day >> tmp_month >> tmp_year;

        if (tmp_year > young_year
            || (tmp_year == young_year && tmp_month > young_month)
            || (tmp_year == young_year && tmp_month == young_month && tmp_day > young_day)
        ) {
            young = tmp;
            young_day = tmp_day;
            young_month = tmp_month;
            young_year = tmp_year;
        }

        if (tmp_year < old_year
            || (tmp_year == old_year && tmp_month < old_month)
            || (tmp_year == old_year && tmp_month == old_month && tmp_day < old_day)
        ) {
            old = tmp;
            old_day = tmp_day;
            old_month = tmp_month;
            old_year = tmp_year;
        }
    }

    cout << young << "\n" << old;

    return 0;
}