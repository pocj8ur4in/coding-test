#include <cmath>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> NE;

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int T;
    cin >> T;

    for(int i = 0; i < T; i++) {
        int N;
        cin >> N;
        NE.clear();

        for(int j = 0; j < N; j++) {
            int tmp;
            cin >> tmp;
            NE.push_back(tmp);
        }

        long long result = 0;
        int max_price = 0;

        for (int i = N - 1; i >= 0; i--) {
            if (max_price < NE[i]) {
                max_price = NE[i];
            } else {
                result += max_price - NE[i];
            }
        }

        cout << result << "\n";
    }

    return 0;
}
