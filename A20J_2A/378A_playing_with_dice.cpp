#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a, b, aW(0), dR(0), bW(0);
  cin >> a >> b;

  for (int i = 1; i <= 6; i++)
  {
    if (abs(a - i) < abs(b - i))
      aW += 1;
    else if (abs(a - i) > abs(b - i))
      bW += 1;
    else
      dR += 1;
  }
  cout << aW << " " << dR << " " << bW << endl;
  return 0;
}


