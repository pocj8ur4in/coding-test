#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int N, K;
    cin >> N >> K;

    vector<int> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    int result = 0;
    for (int i = N - 1; i >= 0; i--) {
        if (v[i] <= K) {
            result += K / v[i];
            K %= v[i];
        }
    }

    cout << result;

    return 0;
}
