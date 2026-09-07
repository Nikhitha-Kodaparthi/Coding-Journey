#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        if (K >= N + 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}