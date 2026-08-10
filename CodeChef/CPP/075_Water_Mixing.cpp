#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B, X, Y;
        cin >> A >> B >> X >> Y;

        if (B == A) {
            cout << "YES\n";
        }
        else if (B > A && B - A <= X) {
            cout << "YES\n";
        }
        else if (B < A && A - B <= Y) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }

    return 0;
}