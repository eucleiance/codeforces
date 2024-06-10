#include <iostream>
using namespace std;

int main()
{
  int n, skip;
  cin >> n >> skip;
  int startMin, endMin;
  int timeElapsed = 1, minMins = 0;

  for (int i = 0; i < n; i++)
  {
    cin >> startMin >> endMin;
    // Adjust timeElapsed to the nearest multiple of skip that is <= startMin
    timeElapsed += skip * ((startMin - timeElapsed) / skip);

    // Calculate the total time spent in the interval [timeElapsed, endMin]
    // The +1 makes the interval inclusive
    minMins += endMin - timeElapsed + 1;

    // Update timeElapsed to just after the current interval
    // The +1 moves timeElapsed to the next minute after endMin
    timeElapsed = endMin + 1;
  }

  cout << minMins << endl;
  return 0;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//   int n, skip;
//   cin >> n >> skip;
//   int startMin[n], endMin[n];
//   for (int i = 0; i < n; i++)
//   {
//     cin >> startMin[i] >> endMin[i];
//   }
//   int timeElapsed(1), minMins(1), c(0);
//   while (c < n) {
//     int tempS = startMin[c];
//     int tempE = endMin[c];
//     while ((timeElapsed + skip) <= tempS){
//       timeElapsed += skip;
//     }
//     // If timeElapsed is before tempS, add the difference to minMins
//     if (timeElapsed < tempS) {
//       minMins += tempS - timeElapsed;
//       timeElapsed = tempS;
//     }
//
//     minMins += tempE - tempS;
//     timeElapsed = tempE;
//     c++;
//     // cout << c << " Time Elapsed: " << timeElapsed << " Min Mins " << minMins << endl;
//   }
//   cout << minMins << endl;
// }
// Number of best moments + Skip Mins 
// n = 1 Start of Best Moments + End of Best Moment
// n = 2 Start of Best Moments + End of Best Moment
// Out -> Minimum mins of movie you have to watch to watch all Best Moments

// 2 3
// 5 6
// 10 12

// 6
// 1 + (3 Skip) + 1 + [1 BM] + (3 Skip) + 1 + [2 BM]

