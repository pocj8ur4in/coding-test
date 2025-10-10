#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int X;
    cin >> X;

    int i = 1;
    bool is_right = true;
    while (X - i > 0) {
        X -= i;
        i++;

        if (is_right) {
            is_right = false;
        } else {
            is_right = true;
        }
    }

    int up = 1 + (X - 1);
    int lw = i - (X - 1);
    if (is_right) {
        up = i - (X - 1);
        lw = 1 + (X - 1);
    }

    cout << up << "/" << lw;

    return 0;
}