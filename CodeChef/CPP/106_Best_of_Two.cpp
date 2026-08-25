#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A1, A2, A3, B1, B2, B3;
        cin >> A1 >> A2 >> A3 >> B1 >> B2 >> B3;

        int alice = A1 + A2 + A3 - min({A1, A2, A3});
        int bob = B1 + B2 + B3 - min({B1, B2, B3});

        if (alice > bob)
            cout << "Alice\n";
        else if (bob > alice)
            cout << "Bob\n";
        else
            cout << "Tie\n";
    }

    return 0;
}