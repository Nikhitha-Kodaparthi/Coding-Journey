#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int S, X, Y, Z;
        cin >> S >> X >> Y >> Z;

        int freeMemory = S - X - Y;

        if (freeMemory >= Z) {
            cout << 0 << '\n';
        }
        else if (freeMemory + X >= Z || freeMemory + Y >= Z) {
            cout << 1 << '\n';
        }
        else {
            cout << 2 << '\n';
        }
    }

    return 0;
}