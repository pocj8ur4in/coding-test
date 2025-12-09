#include <iostream>
#include <vector>

using namespace std;

int N, M;

void backtracking(int size, int curr, vector<int> v) {
    if (size == M) {
        for (int i = 0; i < M; i++) {
            cout << v[i] << " ";
        }

        cout << "\n";
        
        return;
    }
    
    for (int i = curr; i < N; i++) {
        v[size] = i + 1;

        backtracking(size + 1, i, v);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    
    cin >> N >> M;
    vector<int> v(M);

    backtracking(0, 0, v);

    return 0;
}
