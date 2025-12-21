#include <iostream>
#include <set>
#include <vector>

using namespace std;

int N;
int table[101];
bool visited[101];
vector<int> answer;

void DFS(int current, int start) {
    if (visited[current]) {
        if (start == current) answer.push_back(current);

        return;
    }

    visited[current] = true;
    DFS(table[current], start);
}

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++) cin >> table[i + 1];

    for (int i = 1; i <= N; i++) {
        memset(visited, false, sizeof(visited));
        DFS(i, i);
    }

    int count = answer.size();
    cout << count << "\n";
    for (int i = 0; i < count; i++) cout << answer[i] << "\n";

    return 0;
}
