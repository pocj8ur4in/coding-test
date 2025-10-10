#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int h, m;
    cin >> h >> m;

    if (m < 45) {
        m = 60 + (m - 45);
        if (h == 0) {
            h = 23;
        } else {
            h -= 1; 
        }
    } else {
        m = m - 45;
    }

    cout << h << " " << m;

    return 0;
}