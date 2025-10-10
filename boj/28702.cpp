#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    string arr[3];
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
    }

    int i = 0, num = -1;
    for (i = 0; i < 3; i++) {
        if (arr[i] == "Fizz"
            || arr[i] == "Buzz"
            || arr[i] == "FizzBuzz"
        ) {
            continue;
        }

        num = stoi(arr[i]);
        break;
    }

    num += (3 - i);

    if (num % 3 == 0) {
        if (num % 5 == 0) {
            cout << "FizzBuzz";
        } else {
            cout << "Fizz";
        }
    } else {
        if (num % 5 == 0) {
            cout << "Buzz";
        } else {
            cout << num;
        }
    }

    return 0;
}