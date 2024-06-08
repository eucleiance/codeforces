#include <iostream>
using namespace std;

int main()
{
  int numberOfHolds;
  cin >> numberOfHolds;
  int heights[numberOfHolds], differences[numberOfHolds - 1];
  int initialMaxGap(0), minDifficulty(1000);

  cin >> heights[0];

  // Read the heights and calculate initial differences between consecutive holds
  for (int i = 1; i < numberOfHolds; i++)
  {
    cin >> heights[i];
    differences[i] = heights[i] - heights[i - 1];
    initialMaxGap = max(initialMaxGap, differences[i]);
  }

  // Calculate the minimum difficulty after removing one hold
  for (int i = 2; i < numberOfHolds; i++)
  {
    int combinedGap = differences[i] + differences[i - 1];
    minDifficulty = min(minDifficulty, max(combinedGap, initialMaxGap));
  }

  cout << minDifficulty << endl;
  return 0;
}
