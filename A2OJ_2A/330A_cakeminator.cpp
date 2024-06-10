#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
  int r, c;
  cin >> r >> c;
  vector<int> vR(r);
  vector<int> vC(c);
  string s;
  for (int i = 0; i < r; i++)
  {
    cin >> s;
    for (int j = 0; j < c; j++)
    {
      if (s[j] == 'S')
      {
        vR[i] = 1;
        vC[j] = 1;
      }
    }
  }
  int cakes = 0;
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      if (vR[i] == 0 || vC[j] == 0)
      {
        cakes++;
      }
    }
  }
  cout << cakes << endl;
  return 0;
}
