#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        if (2 * Z > X * Y)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}