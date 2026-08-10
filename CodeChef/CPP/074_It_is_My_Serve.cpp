#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int P, Q;
        cin >> P >> Q;

        int total = P + Q;

        if ((total / 2) % 2 == 0)
            cout << "Alice\n";
        else
            cout << "Bob\n";
    }

    return 0;
}