#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    while (N--) {
        int A, B, C;
        cin >> A >> B >> C;

        int arr[] = {A, B, C};

        sort(arr, arr + 3);

        cout << arr[1] << '\n';
    }

    return 0;
}