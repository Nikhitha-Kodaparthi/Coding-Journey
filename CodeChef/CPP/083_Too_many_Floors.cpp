#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        int floorX = (X + 9) / 10;
        int floorY = (Y + 9) / 10;

        cout << abs(floorX - floorY) << '\n';
    }

    return 0;
}