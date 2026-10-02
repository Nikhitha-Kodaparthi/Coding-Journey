#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        int availableWeight = Z - Y;
        int mangoes = availableWeight / X;

        cout << mangoes << endl;
    }

    return 0;
}