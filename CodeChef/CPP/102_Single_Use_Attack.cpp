#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int H, X, Y;
        cin >> H >> X >> Y;

        int normal = (H + X - 1) / X;
        int special = 1 + (H - Y + X - 1) / X;

        cout << min(normal, special) << '\n';
    }

    return 0;
}