#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int a, b, c, d, e;
    cin >> a >> b;

    c = b / 100;
    d = (b % 100) / 10;
    e = b % 10;

    cout << a * e << "\n";
    cout << a * d << "\n";
    cout << a * c << "\n";
    
    cout << a * c * 100 + a * d * 10 + a * e << "\n";

    return 0;
}
