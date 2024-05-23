#include <iostream>
#include <algorithm>
// algorithm has sort()

using namespace std;

int main()
{
  int totalCoins;
  cin >> totalCoins;
  int coinsArr[totalCoins];
  int totalSum =0, reqSum =0, count =0;
  for (int i = 0; i <totalCoins; i++)
  {
    cin >> coinsArr[i];
    totalSum += coinsArr[i];
  }
  int half = totalSum / 2;
  sort(coinsArr, coinsArr + totalCoins);
  for (int i = totalCoins - 1; i >=0 ; i-- )
  {
    reqSum += coinsArr[i];
    count++;
    if (reqSum > half)
    {
      break;
    }
  }
  cout << count << endl;
  return 0;
}
