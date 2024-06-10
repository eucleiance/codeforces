#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int n, minX, maxX, minY, maxY, count(0);
  cin >> n;
  vector<int> locX(n), locY(n);
  cin >> locX[0] >> locY[0];
  minX = locX[0];
  maxX = locX[0];
  minY = locY[0];
  maxY = locY[0];
  for (int i = 1; i < n; i++)
  {
    cin >> locX[i] >> locY[i];
    minX = min(locX[i], minX);
    maxX = max(locX[i], maxX);
    minY = min(locY[i], minY);
    maxY = max(locY[i], maxY);
  }
  for (int i = 0; i < n; i++)
  {
    if ((locX[i] > minX) && (locX[i] < maxX) && (locY[i] > minY) && (locY[i] < maxY))
    {
      bool up(false), down(false), left(false), right(false);
      for (int j = 0; j < n; j++)
      {
        if ((locX[i] == locX[j]) && (locY[i] > locY[j]))
        {
          down = true;
        }
        else if ((locX[i] == locX[j]) && (locY[i] < locY[j]))
        {
          up = true;
        }
        else if ((locX[i] < locX[j]) && (locY[i] == locY[j]))
        {
          right = true;
        }
        else if ((locX[i] > locX[j]) && (locY[i] == locY[j]))
        {
          left = true;
        }
      }
      if (up == true && down == true && left == true && right == true)
      {
        count++;
      }
    }
  }
  cout << count << endl;
  return 0;
}


// 8
// 1 1
// 4 2
// 3 1
// 1 2
// 0 2
// 0 1
// 1 0
// 1 3
//
// 2
//
//
// x' > x & y' = y -> Right Neighbor
// x' < x & y' = y -> Left Neighbor
// x' = x & y' > y -> Upper Neighbor
// x' = x & y' < y -> Lower Neighbor

