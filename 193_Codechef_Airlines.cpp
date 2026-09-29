#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        int totalSeats = 10 * X;
        int passengers = min(Y, totalSeats);

        cout << passengers * Z << endl;
    }

    return 0;
}