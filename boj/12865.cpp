#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int DP[101][100001];
int W[101];
int V[101];

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    
    int N, K;
    cin >> N >> K;
    
    for (int i = 1; i <= N; i++) {
        cin >> W[i] >> V[i];
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= K; j++) {
            // 물건을 넣을 수 있는 경우
            if (j >= W[i]) {
                // 이전의 값과 비교해 더 큰 값을 넣음
                DP[i][j] = max(DP[i - 1][j], DP[i - 1][j - W[i]] + V[i]);

            // 물건을 넣을 수 없는 경우
            } else {
                // 이전 값 그대로 넣음
                DP[i][j] = DP[i - 1][j];
            }
        }
    }

    cout << DP[N][K];

    return 0;
}
