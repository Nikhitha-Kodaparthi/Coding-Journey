#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        cout << max(0, N - M) << endl;
    }

    return 0;
}