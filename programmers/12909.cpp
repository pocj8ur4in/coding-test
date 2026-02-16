#include <string>

using namespace std;

bool solution(string s) {
    int open = 0;

    for (char c : s) {
        if (c == '(') {
            ++open;
        } else {
            if (open == 0) return false;
            --open;
        }
    }

    return open == 0;
}
