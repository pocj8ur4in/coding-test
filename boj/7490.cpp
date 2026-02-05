#include <cctype>
#include <iostream>
#include <vector>

using namespace std;

int N;
vector<string> answer;

int calc(string str) {
    string t = "";

    // 공백 제거
    for (char c : str) {
        if (c != ' ') t += c;
    }

    int sum = 0;
    int num = 0;
    char opr = '+';

    for (int i = 0; i < t.size(); i++) {
        // 숫자일 때 자릿수 계산해 합산
        if (isdigit(t[i])) {
            num = num * 10 + (t[i] - '0');
        }

        if (!isdigit(t[i]) || i == t.size() - 1) {
            // 연산자 계산
            if (opr == '+') sum += num;
            else if (opr == '-') sum -= num;

            opr = t[i];
            num = 0;
        }
    }

    return sum;
}

void dfs(int num, string expr) {
    // 종료 조건 설정
    if (num > N) {
        if (calc(expr) == 0) {
            answer.push_back(expr);
        }

        return;
    }

    // 표현식의 경우의 수 완전탐색
    dfs(num + 1, expr + " " + to_string(num));
    dfs(num + 1, expr + "+" + to_string(num));
    dfs(num + 1, expr + "-" + to_string(num));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> N;
        
        answer.clear();

        dfs(2, "1");

        for (auto &s : answer) {
            cout << s << "\n";
        }

        cout << "\n";
    }   

    return 0;
}
