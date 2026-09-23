#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B, C, D;
        cin >> A >> B >> C >> D;

        int first = A - C;
        int second = B - D;

        if (first < second)
            cout << "First\n";
        else if (first > second)
            cout << "Second\n";
        else
            cout << "Any\n";
    }

    return 0;
}