#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n;
    cin >> n;

    int result = 0;
    for (int i = 0; i < n; i++) {
        result += i + 1;
    }

    cout << result;

    return 0;
}