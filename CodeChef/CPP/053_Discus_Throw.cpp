#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B, C;
        cin >> A >> B >> C;

        int ans = A;
        if (B > ans)
            ans = B;
        if (C > ans)
            ans = C;

        cout << ans << endl;
    }

    return 0;
}