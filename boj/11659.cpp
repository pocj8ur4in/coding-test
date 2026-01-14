#include <iostream>
#include <vector>

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
    ios_base::sync_with_stdio();
    cout.tie(NULL);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    vector<int> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    vector<int> s = sum(N, v);
    for (int k = 0; k < M; k++) {
        int i, j;
        cin >> i >> j;

        cout << s[j] - s[i - 1] << "\n";
    }

    return 0;
}
