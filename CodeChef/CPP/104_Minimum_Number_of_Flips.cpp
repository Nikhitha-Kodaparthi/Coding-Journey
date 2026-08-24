#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int sum = 0;

        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;
            sum += x;
        }

        if (N % 2 != 0)
            cout << -1 << '\n';
        else
            cout << abs(sum) / 2 << '\n';
    }

    return 0;
}