#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, X, B, Y;
        cin >> A >> X >> B >> Y;

        int alice = A * Y;
        int bob = B * X;

        if (alice > bob)
            cout << "ALICE\n";
        else if (alice < bob)
            cout << "BOB\n";
        else
            cout << "EQUAL\n";
    }

    return 0;
}