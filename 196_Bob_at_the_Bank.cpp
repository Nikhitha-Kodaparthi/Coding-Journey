#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int W, X, Y, Z;
        cin >> W >> X >> Y >> Z;

        int finalBalance = W + (X - Y) * Z;

        cout << finalBalance << endl;
    }

    return 0;
}