#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int totalS, totalP;
  cin >> totalS >> totalP;
  int sortedP[totalP];
  for (int i = 0; i < totalP; i++)
  {
    cin >> sortedP[i];
  }
  sort(sortedP, sortedP + totalP);
  int minVal = (sortedP[totalS -1] - sortedP[0]);
  for (int i = 0; i < (totalP - totalS + 1) ; i++){
    if (sortedP[i + (totalS - 1)] - sortedP[i] < minVal)
    {
      minVal = (sortedP[i + (totalS -1)] - sortedP[i]);
    }
  }
    cout << abs(minVal) << endl;
  return 0;
}


// 3 20
// 446 852 783 313 549 965 40 88 86 617 479 118 768 34 47 826 366 957 463 903
// 13

// 2 2 
// 4 4 
// 0

// 2 10
// 4 5 6 7 8 9 10 11 12 12

// 0 = 0 + 4
// 1 = 1 + 4

// 4            - total Students
// 1 2 3 4 5 6  - total Presents
// 0 1 2 3 4 5  - i Position
// 4 5 6 

// 4 6
// 4 Students, 6 Puzzles
// 10 12 10 7 5 22
// 5 7 10 10 12 22
// 5
