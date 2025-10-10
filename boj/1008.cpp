#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double a, b;
    cin >> a >> b;

    // NOTE: 실수형에서 소수점 9자리까지 출력 시에는 cout.precision 필요
    cout.precision(9);
    cout << fixed << a / b;

    return 0;
}
