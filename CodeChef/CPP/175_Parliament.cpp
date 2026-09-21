#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, X;
        cin >> N >> X;

        if (2 * X >= N)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}