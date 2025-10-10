#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int N;
    cin >> N;

    int arr[N];
    for (int i = N - 1; i >= 0; i--) {
        cin >> arr[i];
    }

    int result = 0, view_point = 0;
    for (int i = 0; i < N; i++) {
        if (view_point < arr[i]) {
            view_point = arr[i];
            result++;
        }
    }

    cout << result;

    return 0;
}