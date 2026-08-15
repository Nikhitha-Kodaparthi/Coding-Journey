#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        int orderAB = 1500 - 6 * X - 4 * Y;
        int orderBA = 1500 - 2 * X - 6 * Y;

        cout << max(orderAB, orderBA) << '\n';
    }

    return 0;
}