#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y, A, B;
        cin >> X >> Y >> A >> B;

        int ans = 0;

        if (X != A && X != B)
            ans++;

        if (Y != A && Y != B)
            ans++;

        cout << ans << '\n';
    }

    return 0;
}