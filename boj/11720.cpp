#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio();
    cout.tie(NULL);
    cin.tie(NULL);

    int N;
    string S;

    cin >> N >> S;

    int sum = 0;
    for (int i = 0; i < S.size(); i++) {
        int num = S[i] - '0';
        sum += num;
    }

    cout << sum;

    return 0;
}
