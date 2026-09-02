#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        cout << max(0, X - Y) << '\n';
    }

    return 0;
}