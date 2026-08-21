#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        int count = 0;

        for (int i = 0; i < N; i++) {
            int A;
            cin >> A;

            if ((A + K) % 7 == 0)
                count++;
        }

        cout << count << '\n';
    }

    return 0;
}