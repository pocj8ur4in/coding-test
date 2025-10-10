#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    int arr[N];
    for (int i = 0; i < N; i++) {
        arr[i] = i + 1;
    }

    for (int i = 0; i < M; i++) {
        int x, y;
        cin >> x >> y;

        reverse(arr + x - 1, arr + y);
    }

    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}