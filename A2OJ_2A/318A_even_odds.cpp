#include <iostream>
using namespace std;
int main()
{
    long long n, k;
    cin >> n >> k;

    if (k <= (n + 1) / 2) {
        cout << 2 * k - 1 << endl;
    } else {
        cout << 2 * (k - (n + 1) / 2) << endl;
    }

    return 0;
}

// 1, 3, 5, 7, 9, 2, 4, 6, 8, 10
// n -> total numebrs
// k -> positionk
// odd and then even 
