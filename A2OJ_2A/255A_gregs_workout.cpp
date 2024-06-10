#include <iostream>
using namespace std;
int main()
{
  int n, val, c(1), chest(0), biceps(0), back(0);
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> val;
    if (c == 1)
    {
      chest += val;
      c = 2;
    } else if ( c == 2 )
    {
      biceps += val;
      c = 3;
    } else if ( c == 3)
    {
      back += val;
      c = 1;
    }
  }
  int mostEx = max(max(chest, biceps), back);
  if (mostEx == chest) cout << "chest" << endl;
  else if (mostEx == biceps) cout << "biceps" << endl;
  else if (mostEx == back) cout << "back" << endl;
  return 0;
}
