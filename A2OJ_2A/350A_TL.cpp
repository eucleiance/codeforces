#include <iostream>
#include <algorithm>
#include <climits> 

using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;

  int arrN[n], arrM[m];
  int maxCorrect = 0, minCorrect = INT_MAX, minWrong = INT_MAX;

  for (int i = 0; i < n; i++)
  {
    cin >> arrN[i];
    maxCorrect = max(maxCorrect, arrN[i]);
    minCorrect = min(minCorrect, arrN[i]);
  }

  for (int i = 0; i < m; i++)
  {
    cin >> arrM[i];
    minWrong = min(minWrong, arrM[i]);
  }

  // Check for the valid TL
  int TL = max(maxCorrect, 2 * minCorrect);
  if (TL < minWrong)
  {
    cout << TL << endl;
  }
  else
{
    cout << -1 << endl;
  }

  return 0;
}


// n -> number of correct solutions  -> knows running time in seconds
// m -> number of wrong solutions    -> knows running time in seconds
// v -> seconds of Time Limit in the problem 
//
// 3 5
// n1 n2 n3 
// m1 m2 m3 m4

// Smallest Time Limit where all n < TL
// At least one n = 2n < TL
// All m > TL
