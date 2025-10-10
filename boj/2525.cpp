#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int h, m, c;
    cin >> h >> m;
    cin >> c;

    h += c / 60;
    m += c % 60;
    h += m / 60;
    m %= 60;
    h %= 24;

    cout << h << " " << m;

    return 0;
}
