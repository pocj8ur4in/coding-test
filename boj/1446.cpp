#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int N, D;
    cin >> N >> D;

    vector<vector<pair<int,int> > > shortcut(D + 1);

    for (int i = 0; i < N; i++) {
        int start, end, count;
        cin >> start >> end >> count;

        if (end > D || count >= end - start) continue;

        shortcut[start].push_back({end, count});
    }

    vector<int> dp(D+1, 1e9);
    dp[0] = 0;

    for (int i = 0; i < D; i++) {
        dp[i + 1] = min(dp[i + 1], dp[i] + 1);

        for (auto [endpoint, cost] : shortcut[i]) {
            dp[endpoint] = min(dp[endpoint], dp[i] + cost);
        }
    }

    cout << dp[D];

    return 0;
}
