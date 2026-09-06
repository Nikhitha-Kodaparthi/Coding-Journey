#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X;
        cin >> X;

        if (X <= 70)
            cout << 0 << '\n';
        else if (X <= 100)
            cout << 500 << '\n';
        else
            cout << 2000 << '\n';
    }

    return 0;
}