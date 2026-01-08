#include <iostream>
#include <map>
#include <cmath>
#include <vector>

using namespace std;

map<int, vector<bool> > led;

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    led[0] = {true, true, true, false, true, true, true};
    led[1] = {false, false, true, false, false, true, false};
    led[2] = {true, false, true, true, true, false, true};
    led[3] = {true, false, true, true, false, true, true};
    led[4] = {false, true, true, true, false, true, false};
    led[5] = {true, true, false, true, false, true, true};
    led[6] = {true, true, false, true, true, true, true};
    led[7] = {true, false, true, false, false, true, false};
    led[8] = {true, true, true, true, true, true, true};
    led[9] = {true, true, true, true, false, true, true};

    int N, K, P, X;
    cin >> N >> K >> P >> X;

    int result = 0;

    for (int i = 1; i <= N; i++) {
        if (i == X) continue;

        int cnt = 0;
        int from = X;
        int to = i;
        
        for (int j = 0; j < K; j++) {
            for (int j = 0; j < 7; j++) {
                if (led[from%10][j] != led[to%10][j]) cnt++;
            }

            from /= 10;
            to /= 10;
        }

        if (cnt <= P) {
            result++;
        }
    }

    cout << result;

    return 0;
}
