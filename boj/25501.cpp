#include <iostream>
#include <string.h>

using namespace std;

int recursion(const char *s, int l, int r, int* cnt) {
    (*cnt)++;
    if (l >= r)
      return 1;
    else if (s[l] != s[r])
      return 0;
    else
      return recursion(s, l + 1, r - 1, cnt);
}

int isPalindrome(const char *s, int* cnt) {
    return recursion(s, 0, strlen(s) - 1, cnt);
}

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        char t[1001];
        cin >> t;

        int cnt = 0;
        int result;
        result = isPalindrome(t, &cnt);

        cout << result << " " << cnt << "\n";
    }
    
    return 0;
}
