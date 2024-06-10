#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    
    // Case 1: If the points are vertical aligned
    if (x1 == x2) {
        int side = abs(y2 - y1);
        cout << x1 + side << " " << y1 << " " << x2 + side << " " << y2 << endl;
    }
    // Case 2: If the points are horizontal aligned
    else if (y1 == y2) {
        int side = abs(x2 - x1);
        cout << x1 << " " << y1 + side << " " << x2 << " " << y2 + side << endl;
    }
    // Case 3: If the points form a diagonal of a square
    else if (abs(x1 - x2) == abs(y1 - y2)) {
        cout << x1 << " " << y2 << " " << x2 << " " << y1 << endl;
    }
    // Case 4: Not forming a square
    else {
        cout << -1 << endl;
    }

    return 0;
}
