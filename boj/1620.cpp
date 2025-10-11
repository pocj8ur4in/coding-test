#include <iostream>
#include <cctype>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;
    
    unordered_map<string, int> nameToNum;
    unordered_map<int, string> numToName;
    
    for (int i = 0; i < N; i++) {
        string x;
        cin >> x;
        nameToNum[x] = i + 1;
        numToName[i + 1] = x;
    }

    for (int i = 0; i < M; i++) {
        string x;
        cin >> x;

        if (isdigit(x[0])) {
            cout << numToName[stoi(x)] << '\n';
        } else {
            cout << nameToNum[x] << '\n';
        }
    }

    return 0;
}