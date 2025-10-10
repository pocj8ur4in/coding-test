#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int x, y, z;
    cin >> x >> y >> z;

    if (x == y) {
        if (y == z) {
            cout << 10000 + x * 1000;
        } else {
            cout << 1000 + x * 100;
        }
    } else {
        if (z == x) {
            cout << 1000 + x * 100;
        } else if (y == z) {
            cout << 1000 + y * 100;
        } else {
            if (x < y) {
                x = y;
            }
            if (x < z) {
                x = z;
            }
            cout << 100 * x;
        }
    }

    return 0;
}