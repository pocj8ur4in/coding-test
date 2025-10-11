#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int M;
    cin >> M;

    vector<int> arr(M);
    int size = 0;
    for(int i = 0; i < M; i++) {
        cin >> arr[i];
        size += arr[i];
    }

    int K;
    cin >> K;

    double result = 0.0;
    for (int i = 0; i < M; i++) {
        if (arr[i] >= K) {
            double tmp = 1.0;
            for (int j = 0; j < K; j++) {
                tmp *= (double)(arr[i] - j) / (size - j);
            }
            result += tmp;
        }
    }

    cout << fixed;
    cout.precision(9);
    cout << result << '\n';

    return 0;
}