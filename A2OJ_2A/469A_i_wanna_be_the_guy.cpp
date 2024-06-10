#include <iostream>
#include <set>
using namespace std;

int main()
{
  int n, x, y;
  cin >> n >> x;

  set<int> p;
  for (int i = 0; i < x; i++)
  {
    int valp;
    cin >> valp;
    p.insert(valp);
  }

  cin >> y;
  set<int> q;
  for (int i = 0; i < y; i++)
  {
    int valq;
    cin >> valq;
    q.insert(valq);
  }

  string strOut = "I become the guy.";
  for (int i = 1; i <= n; i++)
  {
    if (p.find(i) == p.end() && q.find(i) == q.end())
    {
      strOut = "Oh, my keyboard!";
      break;
    }
  }

  cout << strOut << endl;
}
