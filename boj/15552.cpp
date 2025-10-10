#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int x, y;
        cin >> x >> y;
        cout << x + y << "\n";
    }

    return 0;
}