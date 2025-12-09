#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int X, N;
    cin >> X >> N;

    int result = 0;
    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;

        result += a * b;
    }

    if (X == result) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}
