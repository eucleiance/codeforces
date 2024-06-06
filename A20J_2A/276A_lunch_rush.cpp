#include <iostream>
using namespace std;
int main()
{
  int n, k, f, t, j, maxJ;
  cin >> n >> k >> f >> t;
  maxJ = (t > k) ? f - (t - k) : f;
  while (--n)
  {
    cin >> f >> t;
    j = (t > k) ? f - (t - k) : f;
    maxJ = (j > maxJ) ? j : maxJ;
  }
  cout << maxJ << endl;
  return 0;
}
