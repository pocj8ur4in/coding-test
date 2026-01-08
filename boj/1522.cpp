#include <iostream>

using namespace std;

int result = 1000;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    int numA = 0;
    cin >> str;

    for (auto c:str) {
        if (c == 'a') {
            numA++;
        }
    }

    int len = str.length();
    for (int i = 0; i < len; i++) {
        int cnt = 0;
        for (int j = 0; j < numA; j++) {
            if (str[(i + j >= len) ? i + j - len : i + j] != 'a') cnt++;
        }

        result = min(result, cnt);
    }

    cout << result;

    return 0;
}
