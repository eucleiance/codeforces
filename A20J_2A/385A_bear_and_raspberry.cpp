#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int n, c, calc(0);
  cin >> n >> c;

  int days[n];
  for (int i = 0; i < n; i++)
    cin >> days[i];

  for (int i = 1; i < n; i++)
    if (days[i - 1] > days[i]){
      if (days[i - 1] - days[i] - c > calc)
        calc = days[i - 1] - days[i] - c;
    }

  cout << calc << endl;
  return 0;
}
