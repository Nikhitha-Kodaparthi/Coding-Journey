#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B, X, Y;
        cin >> A >> B >> X >> Y;

        int chefTime = A * Y;
        int chefinaTime = B * X;

        if (chefTime < chefinaTime)
            cout << "Chef\n";
        else if (chefTime > chefinaTime)
            cout << "Chefina\n";
        else
            cout << "Both\n";
    }

    return 0;
}