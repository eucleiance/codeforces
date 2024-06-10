#include <iostream>
using namespace std;
int main()
{
  int n, k, a, count(0);
  cin >> n >> k;
  for (int i = 0; i < n; i++)
  {
    cin >> a;
    int len(0);
    while (a != 0)
    {
      int luck = a % 10;
      a = a/10;
      if ((luck == 4) || (luck == 7)) 
        len++;
    }
    if (len <= k)
    {
      count++;
    }
  }
  cout << count << endl;
  return 0;
}


// 2 2
// 507978501 180480073
//
// -> 2
