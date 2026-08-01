#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, count = 0;
        cin >> N;

        while (N--) {
            int x;
            cin >> x;
            if (x >= 1000)
                count++;
        }

        cout << count << endl;
    }

    return 0;
}