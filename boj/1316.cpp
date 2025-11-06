#include <iostream>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    int count = 0;
    for (int i = 0; i < N; i++) {
        string str;
        cin >> str;

        map<char, bool> visited;
        bool is_group = true;
        char prev = '\0';

        for (int j = 0; j < str.size(); j++) {
            char current = str[j];

            if (current != prev && visited[current]) {
                is_group = false;
                break;
            }
            
            visited[current] = true;
            prev = current;
        }

        if (is_group) {
            count++;
        }
    }

    cout << count;

    return 0;
}
