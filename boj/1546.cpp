#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int N, M = 0;
    cin >> N;
    int arr[N];
    double sum = 0;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        if (M < arr[i]) {
            M = arr[i];
        }
        sum += arr[i];
    }

    sum = sum / M * 100;
    double measure;
    measure = sum / N;
    cout << measure;

    return 0;
}