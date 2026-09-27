#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int count = 0;

    while (N--) {
        int A;
        cin >> A;

        if (A % K == 0)
            count++;
    }

    cout << count << endl;

    return 0;
}