#include <iostream>
using namespace std;

int main() {
  int n, conA(0), conB(0);
  cin >> n;
  int conX(0), conY(n-1);
  char arr[n][n];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }

  char charX = arr[0][0];
  char charNX = arr[0][1];

  if (charX == charNX) {
    cout << "NO" << endl;
    return 0;
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if ((i == j || i + j == n - 1)) {
        // Check diagonal elements
        if (arr[i][j] != charX) {
          cout << "NO" << endl;
          return 0;
        }
      } else {
        // Check non-diagonal elements
        if (arr[i][j] != charNX) {
          cout << "NO" << endl;
          return 0;
        }
      }
    }
  }

  cout << "YES" << endl;
  return 0;
}


// 0,0  0,1  0,2  0,3  0,4
// 1,0  1,1  1,2  1,3  1,4
// 2,0  2,1  2,2  2,3  2,4
// 3,0  3,1  3,2  3,3  3,4
// 4,0  4,1  4,2  4,3  4,4

// 0,0  1,1  2,2  3,3  4,4  i=j
// 0,4  1,3  2,2  3,1  4,0  i+j = n-1


