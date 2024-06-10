// 4
// 33 44 11 22
// 2
// 44 33 22 11

// 7
// 10 10 58 31 63 40 76
// 10
// 76 63 28 40 31 10 10




#include <iostream>
using namespace std;
int main()
{
  // Number of soldiers and height of the first soldier
  int numSoldiers, heightFirstSoldier;

  // Read the number of soldiers and the height of the first soldier
  cin >> numSoldiers >> heightFirstSoldier;

  // Initialize variables to keep track of the minimum and maximum heights and their corresponding indices
  int minHeight(heightFirstSoldier), maxHeight(heightFirstSoldier), indexOfMinHeight(0), indexOfMaxHeight(0);

  // Loop through the heights of the remaining soldiers
  for (int i = 1; i < numSoldiers; ++i)
  {
    // Read the height of the current soldier
    int currentHeight;
    cin >> currentHeight;

    // Update maximum height and its index if the current height is greater
    if (currentHeight > maxHeight)
    {
      maxHeight = currentHeight;
      indexOfMaxHeight = i;
    }

    // Update minimum height and its index if the current height is less than or equal
    if (currentHeight <= minHeight)
    {
      minHeight = currentHeight;
      indexOfMinHeight = i;
    }
  }

  // Calculate the result based on the indices of the tallest and shortest soldiers
  cout << indexOfMaxHeight + (numSoldiers - 1 - indexOfMinHeight) - (indexOfMinHeight < indexOfMaxHeight ? 1 : 0) << endl;

  return 0;
}




// #include <iostream>
// #include <algorithm>
//
// using namespace std;
//
// int main()
// {
//   int sCount;
//   cin >> sCount;
//   int sHeight[sCount], sortedHeight[sCount];
//   for (int i = 0; i < sCount; i++)
//   {
//     cin >> sHeight[i];
//     sortedHeight[i] = sHeight[i];
//   }
//   sort(sortedHeight, sortedHeight + sCount);
//   int minC = -1, maxC = -1;
//   for (int i = 0; i < sCount; i++)
//   {
//     if (sHeight[i] == sortedHeight[0] && minC == -1)
//     {
//       minC = i;
//     }
//     if (sHeight[i] == sortedHeight[sCount - 1])
//     {
//       maxC = i;
//     }
//   }
//   cout << maxC + (sCount - 1 - minC) - (minC < maxC ? 1 : 0) << endl;
// }
