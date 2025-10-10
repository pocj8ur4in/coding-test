#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int arr[3];
    for (int i = 0; i < 3; i ++) {
        cin >> arr[i];
    }

    sort(arr, arr + 3);

    int gap1 = arr[1] - arr[0] - 1;
    int gap2 = arr[2] - arr[1] - 1;
    
    cout << max(gap1, gap2);

    return 0;
}
