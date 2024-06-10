#include <iostream>
using namespace std;
int main()
{
  int n, k, t, c(0);
  cin >> n >> k;
  for (int i = 0; i < n; i++)
  {
    cin >> t;
    if ((5 - t) >= k) c++;
  }
  cout << ( (c / 3) >= 1 ? (c / 3) : 0 ) << endl;
  return 0;
}

// Input
// 5 2
// 0 4 5 1 0
// Output
// 1


// Input
// 6 4
// 0 1 2 3 4 5
// Output
// 0


// Input
// 6 5
// 0 0 0 0 0 0
// Output
// 2
