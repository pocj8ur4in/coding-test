#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int A, B, V;
    cin >> A >> B >> V;

    int result;
    if (A >= V) {
        result = 1;
    } else {
        result = (V - A + (A - B) - 1) / (A - B) + 1;
    }

    cout << result;

    return 0;
}