#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    cout << (a + b) % c << "\n";
    
    // NOTE: cout << (a % c) + (b % c) % c << "\n"; -> 연산자 우선순위 문제!
    cout << ((a % c) + (b % c)) % c << "\n";
    cout << (a * b) % c << "\n";
    cout << (a % c) * (b % c) % c;

    return 0;
}
