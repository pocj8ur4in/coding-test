#include <iostream>
#include <deque>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    deque<int> dq;
    for (int i = 1; i <= N; i++) {
        dq.push_back(i);
    }

    int result = 0;
    for (int i = 0; i < M; i++) {
        int x;
        cin >> x;
        
        // 현재 인덱스 찾기
        int current = 0;
        for (int j = 0; j < dq.size(); j++) {
            if (dq[j] == x) {
                current = j;
                break;
            }
        }
        
        int left = current;
        int right = dq.size() - current;
        
        // 2, 3번 연산의 최솟값 비교를 통해 수행할 연산 판별
        if (left <= right) {
            for (int k = 0; k < left; k++) {
                dq.push_back(dq.front());
                dq.pop_front();
            }
            result += left;
        } else {
            for (int k = 0; k < right; k++) {
                dq.push_front(dq.back());
                dq.pop_back();
            }
            result += right;
        }
        
        // 1번 연산 수행
        dq.pop_front();
    }

    cout << result; 

    return 0;
}
