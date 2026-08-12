#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X1, Y1, X2, Y2;
        cin >> X1 >> Y1 >> X2 >> Y2;

        int dx = abs(X1 - X2);
        int dy = abs(Y1 - Y2);

        cout << max(dx, dy) << endl;
    }

    return 0;
}