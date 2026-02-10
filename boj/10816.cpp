#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<int, int> card(20000001);
int t;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> t;
        
        if (t < 0) {
            card[t] += 1;
        } else {
            card[10000000 + t] += 1;
        }
    }

    int M;
    cin >> M;

    for (int i = 0; i < M; i++) {
        cin >> t;
        
        if (t < 0) {
            cout << card[t] << " ";
        } else {
            cout << card[10000000 + t] << " ";
        }
    }

    return 0;
}
