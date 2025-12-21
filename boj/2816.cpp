#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<string> channel(N);
    for (int i = 0; i < N; i++) {
        cin >> channel[i];
    }

    int cursor = 0;

    while (channel[cursor] != "KBS1") {
        cout << '1';
        cursor++;
    }

    while (cursor > 0) {
        cout << '4';
        swap(channel[cursor], channel[cursor - 1]);
        cursor--;
    }

    while (channel[cursor] != "KBS2") {
        cout << '1';
        cursor++;
    }

    while (cursor > 1) {
        cout << '4';
        swap(channel[cursor], channel[cursor - 1]);
        cursor--;
    }

    return 0;
}
