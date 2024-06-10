#include <iostream>

using namespace std;

int main()
{
  int count;
  cin >> count;
  int toWhom[count];
  int whichGift[count];
  int giftID = 0;
  for (int i = 1; i <= count; i++) 
  {
    cin >> toWhom[i];
  }

  for (int i = 1; i <= count; i++)
  {
    giftID = toWhom[i];
    whichGift[giftID] = i;
  }
  for (int i = 1; i <= count; i++)
  {
    cout << whichGift[i] << " ";
  }
  cout << endl;
  return 0;
}
