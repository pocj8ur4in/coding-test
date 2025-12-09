#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    vector<bool> v(31, false);
    
    for (int i = 0; i < 28; i++) {
        int t;
        cin >> t;
        
        v[t] = true;
    }

    int counter = 0;
    for (int i = 1; i < 31; i++) {
        if (v[i] == false) {
            cout << i << "\n";
            counter++;
        }

        if (counter == 2) {
            break;
        }
    }

    return 0;
}
