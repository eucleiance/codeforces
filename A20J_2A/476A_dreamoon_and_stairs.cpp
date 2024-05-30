#include <iostream>
using namespace std;
int main()
{
  int n, m, x;
  bool check = true;
  cin >> n >> m;
  if (m > n) check = false;
  x = (n % 2 == 0) ? (n / 2) : (n/2) + 1;
  while (x%m != 0) x++;
  cout << (check != false ? x : -1) << endl;
  return 0;
}
