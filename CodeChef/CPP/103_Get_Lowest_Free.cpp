#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B, C;
        cin >> A >> B >> C;

        int lowest = min({A, B, C});

        cout << A + B + C - lowest << '\n';
    }

    return 0;
}