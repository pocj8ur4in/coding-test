#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    bool is_found = false;
    for (int i = N / 5; i >= 0; i--) {
        int j = N % 5 + (N / 5 - i) * 5;

        if (j % 3 == 0) {
            cout << i + j / 3;
            is_found = true;
            break;
        }
    }

    if (!is_found) {
        cout << -1;
    }

    return 0;
}
