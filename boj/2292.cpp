#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int N;
    cin >> N;

    int x = 0;
    int p = 1;
    while(1) {
        p += x * 6;
        
        if (N <= p) {
            break;
        }

        x++;
    }

    cout << x + 1;

    return 0;
}
