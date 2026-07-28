#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int b1, b2, b3;
        cin >> b1 >> b2 >> b3;

        int empty = (b1 == 0) + (b2 == 0) + (b3 == 0);

        if (empty >= 2)
            cout << "Water filling time" << endl;
        else
            cout << "Not now" << endl;
    }

    return 0;
}