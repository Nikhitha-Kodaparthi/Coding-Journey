#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int W, X, Y, Z;
        cin >> W >> X >> Y >> Z;

        int totalWater = W + (Y * Z);

        if (totalWater > X)
            cout << "overflow" << endl;
        else if (totalWater == X)
            cout << "filled" << endl;
        else
            cout << "unfilled" << endl;
    }

    return 0;
}