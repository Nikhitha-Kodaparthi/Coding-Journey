#include <iostream>
using namespace std;

int main() {
    int R, O, C;
    cin >> R >> O >> C;

    int maxScore = C + (20 - O) * 36;

    if (maxScore > R)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}