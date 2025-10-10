#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int x;
    cin >> x;

    for (int i = 1; i < 10; i++) {
        cout << x << " * " << i << " = " << i * x << "\n";
    }

    return 0;
}