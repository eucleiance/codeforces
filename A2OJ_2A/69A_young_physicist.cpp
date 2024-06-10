#include <iostream>
using namespace std;
int main()
{
  int numLines;
  cin >> numLines;
  int forcex = 0, forcey = 0, forcez = 0;
  for (int i = 0; i < numLines; i++)
  {
    int x, y, z;
    cin >> x >> y >> z;
    forcex += x;
    forcey += y;
    forcez += z;
  }
  if (forcex == 0 && forcey == 0 && forcez == 0)
  {
    cout << "YES" << endl;
  } else
  {
    cout << "NO" << endl;
  }
  return 0;
}
