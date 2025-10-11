#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int N, M;
        cin >> N >> M;

        long long result = 1;
        for (int j = 0; j < N; j++) {
            result = result * (M - j) / (j + 1);
        }

        cout << result << "\n";
    }

    return 0;
}