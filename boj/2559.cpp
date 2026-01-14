#include <iostream>
#include <vector>
#include <climits>

using namespace std;

vector<int> sum(int N, vector<int> v) {
    vector<int> s(N + 1);

    s[0] = 0;
    for (int i = 0; i < N; i++) {
        s[i + 1] += s[i] + v[i];
    }

    return s;
}

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

    vector<int> s = sum(N, v);

    int r = INT_MIN;
    for (int i = 0; i < N - K + 1; i++) {
        int t = s[i + K] - s[i];

        if (r < t) {
            r = t;
        }
    }

    cout << r;

    return 0;
}
