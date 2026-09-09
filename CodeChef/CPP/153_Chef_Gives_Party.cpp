#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, X, K;
        cin >> N >> X >> K;

        if (N * X <= K)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}