#include <ios>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int N, K;
    cin >> N >> K;
    
    vector<int> KA(N);
    for (int i = 0; i < N; i++) {
        cin >> KA[i];
    }

    vector<int> KB(100001, 0);
    int l = 0;
    int ans = 0;
    
    for (int i = 0; i < N; i++) {
        KB[KA[i]]++;

        while(KB[KA[i]] > K) {
            KB[KA[l]]--;
            l++;
        }

        ans = max(ans, i - l + 1);
    }

    cout << ans;

    return 0;
}
