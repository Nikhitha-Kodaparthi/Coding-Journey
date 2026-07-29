#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, X;
        cin >> N >> X;

        int totalSlices = N * X;
        cout << (totalSlices + 3) / 4 << endl;
    }

    return 0;
}