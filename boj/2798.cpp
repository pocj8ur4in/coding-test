#include <iostream>

using namespace std;

int N, M;
int arr[100];
int result = 0;

void dfs(int idx, int count, int sum) {
    // return when card is all selected
    if (count == 3) {
        if (sum <= M && sum > result) {
            result = sum;
        }
        return;
    }
    
    // exit when check all cards
    if (idx >= N) return;
    
    // when card is selected
    dfs(idx + 1, count + 1, sum + arr[idx]);
    
    // when card is not selected
    dfs(idx + 1, count, sum);
}

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    cin >> N >> M;
    
    // input data on arr
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    dfs(0, 0, 0);

    cout << result;

    return 0;
}
