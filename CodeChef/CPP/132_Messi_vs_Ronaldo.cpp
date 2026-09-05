#include <iostream>
using namespace std;

int main() {
    int A, B, X, Y;
    cin >> A >> B >> X >> Y;

    int messiPoints = 2 * A + B;
    int ronaldoPoints = 2 * X + Y;

    if (messiPoints > ronaldoPoints)
        cout << "Messi\n";
    else if (ronaldoPoints > messiPoints)
        cout << "Ronaldo\n";
    else
        cout << "Equal\n";

    return 0;
}