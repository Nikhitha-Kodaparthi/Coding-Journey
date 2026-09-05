#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X;

    if (X < 3)
        cout << "GOLD\n";
    else if (X < 6)
        cout << "SILVER\n";
    else
        cout << "BRONZE\n";

    return 0;
}