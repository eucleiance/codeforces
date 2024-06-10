#include <iostream>
using namespace std;
int main()
{
  int n, d, x = 0, y = 0; 
  bool check;
  cin >> n >> d;
  int t[n];
  for (int i = 0; i < n; i++)
  {
    cin >> t[i];
    y += t[i];
  }
  x = y + ((n - 1) * 10);
  check = (x > d) ? false : true;
  int jC = ((d - y) / 5);
  cout << (check != false ? jC : -1) << endl;
}
