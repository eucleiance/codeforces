#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<int> v1, v2, v3;
  int t1 = 0, t2 = 0, t3 = 0;
  for (int i = 1; i <= n; i++)
  {
    int t;
    cin >> t;
    if (t == 1) v1.push_back(i);
    else if (t == 2) v2.push_back(i);
    else v3.push_back(i);
  }
  int pC = min(v1.size(), min(v2.size(), v3.size()));
  cout << pC << endl;
  for (int i = 0; i < pC; i++)
  {
    cout << v1[i] << " " << v2[i] << " " << v3[i] << endl;
  }
  return 0;
}

// Input
// 7
// 1 3 1 3 2 1 2
// 1 0 0 3 0 1 2

// Output
// 2
// 3 5 2
// 6 7 4

