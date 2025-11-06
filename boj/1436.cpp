#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int N;
    cin >> N;

    int result = 666;
    while (1) {
        string x = to_string(result);

        if (x.find("666") != string::npos) {
            N--;
            if (N == 0) {
                break;
            }
        }

        result++;
    }

    cout << result;

    return 0;
}
