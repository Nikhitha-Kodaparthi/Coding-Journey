#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        if (10 * Y <= 100 * X)
            cout << "CLOTH\n";
        else
            cout << "DISPOSABLE\n";
    }

    return 0;
}